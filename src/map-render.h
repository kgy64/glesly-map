/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 * Project:     Glesly: my GLES-based rendering library
 * Purpose:     My render class for map mesh rendering
 * Author:      György Kövesdi (kgy@teledigit.eu)
 * Licence:     GPL (see file 'COPYING' in the project root for more details)
 * Comments:    
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef __SRC_MAP_RENDER_H_INCLUDED__
#define __SRC_MAP_RENDER_H_INCLUDED__

#include <glesly/render.h>
#include <System/TimeOfDay.h>

namespace Glesly
{
    class MapRender: public Glesly::Render
    {
     protected:
        MapRender(int width, int height);

        Glesly::Transformation myTransform[4];

        Shaders::UniformMatrix_ref<float, 4> myT1Matrix;
        Shaders::UniformMatrix_ref<float, 4> myT2Matrix;
        Shaders::UniformMatrix_ref<float, 4> myT3Matrix;
        Shaders::UniformMatrix_ref<float, 4> myT4Matrix;

     public:
        virtual ~MapRender();

        inline Glesly::Transformation & GetTransform(unsigned index)
        {
            return myTransform[index];
        }

     private:
        SYS_DEFINE_CLASS_NAME("Glesly::MapRender");

    }; // class MapRender

} // namespace Glesly

#endif /* __SRC_MAP_RENDER_H_INCLUDED__ */

/* * * * * * * * * * * * * End - of - File * * * * * * * * * * * * * * */
