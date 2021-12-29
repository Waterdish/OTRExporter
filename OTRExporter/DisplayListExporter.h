#pragma once

#include "ZResource.h"
#include "ZTexture.h"
#include "ZDisplayList.h"
#include <Utils/BinaryWriter.h>

class OTRExporter_DisplayList : public ZResourceExporter
{
public:
	virtual void Save(ZResource* res, fs::path outPath, BinaryWriter* writer) override;
	static std::string GetParentFolderName(ZResource* res);
	static std::string GetPathToRes(ZResource* res, std::string varName);

};