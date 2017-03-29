#include "pch.h"

#include <Kore/Graphics/Shader.h>
#include <Kore/Math/Core.h>

using namespace Kore;

ShaderImpl::ShaderImpl(void* _data, int length, Graphics5::ShaderType type) : _shader(_data, length, type) {}

Shader::Shader(void* _data, int length, ShaderType type) : ShaderImpl(_data, length, (Graphics5::ShaderType)type) {}
