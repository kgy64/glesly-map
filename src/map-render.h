/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 * Project:     Glesly: my GLES-based rendering library
 * Purpose:     My test class for map rendering
 * Author:      György Kövesdi (kgy@teledigit.eu)
 * Licence:     GPL (see file 'COPYING' in the project root for more details)
 * Comments:    
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef __SRC_MY_MAP_RENDER_H_INCLUDED__
#define __SRC_MY_MAP_RENDER_H_INCLUDED__

#include <surface-render.h>

namespace Ducktor
{
    class MapRender: public Glesly::SurfaceRender
    {
     protected:
        MapRender(Glesly::Render3D::RenderInfo & renderInfo);

        virtual void Initialize(void);
        virtual void Frame(const SYS::TimeDelay & frame_start_time);

     public:
        virtual ~MapRender();

        static inline Glesly::SurfaceRenderPtr Create(Glesly::Render3D::RenderInfo & renderInfo)
        {
            SYS_DEBUG_STATIC(DM_GLESLY);
            return Glesly::SurfaceRenderPtr(new MapRender(renderInfo));
        }

     private:
        SYS_DEFINE_CLASS_NAME("Glesly::MapRender");

    }; // class MapRender

} // namespace Ducktor

#endif /* __SRC_MY_MAP_RENDER_H_INCLUDED__ */

/* * * * * * * * * * * * * End - of - File * * * * * * * * * * * * * * */
