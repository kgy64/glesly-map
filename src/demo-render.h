/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 * Project:     Glesly: my GLES-based rendering library
 * Purpose:     My demo class for map rendering
 * Author:      György Kövesdi (kgy@teledigit.eu)
 * Licence:     GPL (see file 'COPYING' in the project root for more details)
 * Comments:    
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef __SRC_MY_DEMO_RENDER_H_INCLUDED__
#define __SRC_MY_DEMO_RENDER_H_INCLUDED__

#include <surface-render.h>

namespace Ducktor
{
    class DemoRender_1: public Glesly::SurfaceRender
    {
     protected:
        DemoRender_1(Glesly::Render3D::RenderInfo & renderInfo);

        virtual void Initialize(void);
        virtual void Frame(const SYS::TimeDelay & frame_start_time);
        virtual void AfterFrame(void);

     public:
        virtual ~DemoRender_1();

        static inline Glesly::RenderPtr Create(Glesly::Render3D::RenderInfo & renderInfo)
        {
            SYS_DEBUG_STATIC(DM_GLESLY);
            return Glesly::RenderPtr(new DemoRender_1(renderInfo));
        }

     private:
        SYS_DEFINE_CLASS_NAME("Glesly::DemoRender_1");

    }; // class DemoRender_1

    class DemoRender_2: public Glesly::SurfaceRender
    {
     protected:
        DemoRender_2(Glesly::Render3D::RenderInfo & renderInfo);

        virtual void Initialize(void);
        virtual void Frame(const SYS::TimeDelay & frame_start_time);
        virtual void AfterFrame(void);

     public:
        virtual ~DemoRender_2();

        static inline Glesly::RenderPtr Create(Glesly::Render3D::RenderInfo & renderInfo)
        {
            SYS_DEBUG_STATIC(DM_GLESLY);
            return Glesly::RenderPtr(new DemoRender_2(renderInfo));
        }

     private:
        SYS_DEFINE_CLASS_NAME("Glesly::DemoRender_2");

    }; // class DemoRender_2

} // namespace Ducktor

#endif /* __SRC_MY_DEMO_RENDER_H_INCLUDED__ */

/* * * * * * * * * * * * * End - of - File * * * * * * * * * * * * * * */
