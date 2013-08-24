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
#include <System/TimeDelay.h>

SYS_DECLARE_MODULE(DM_GLESLY);

namespace Glesly
{
    class MapRender: public Glesly::Render3D
    {
     protected:
        MapRender(Glesly::Render3D::RenderInfo & renderInfo, int width, int height);

     public:
        virtual ~MapRender();

     private:
        SYS_DEFINE_CLASS_NAME("Glesly::MapRender");

    }; // class MapRender

} // namespace Glesly

#endif /* __SRC_MAP_RENDER_H_INCLUDED__ */

/* * * * * * * * * * * * * End - of - File * * * * * * * * * * * * * * */
