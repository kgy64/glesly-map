/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 * Project:     Glesly: my GLES-based rendering library
 * Purpose:     My renderer class for map mesh rendering
 * Author:      György Kövesdi (kgy@teledigit.eu)
 * Licence:     GPL (see file 'COPYING' in the project root for more details)
 * Comments:    
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <glesly/shader-names.h>
#include <my-mesh-vertex.h>
#include <my-mesh-fragment.h>
#include <glesly/shader.h>

#include "map-render.h"

using namespace Glesly;

MapRenderer::MapRenderer(int width, int height)
{
 SYS_DEBUG_MEMBER(DM_GLESLY);

 USE_VERTEX_SHADER(my_mesh_vertex);
 USE_FRAGMENT_SHADER(my_mesh_fragment);
}

MapRenderer::~MapRenderer()
{
 SYS_DEBUG_MEMBER(DM_GLESLY);
}

/* * * * * * * * * * * * * End - of - File * * * * * * * * * * * * * * */
