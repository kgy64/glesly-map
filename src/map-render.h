/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 * Project:     Glesly: my GLES-based rendering library
 * Purpose:     My renderer class for map mesh rendering
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
    class MapRenderer: public Glesly::Render
    {
     protected:
        MapRenderer(int width, int height);

     public:
        virtual ~MapRenderer();

     private:
        SYS_DEFINE_CLASS_NAME("Glesly::MapRenderer");

    }; // class MapRenderer

} // namespace Glesly

#endif /* __SRC_MAP_RENDER_H_INCLUDED__ */

/* * * * * * * * * * * * * End - of - File * * * * * * * * * * * * * * */
