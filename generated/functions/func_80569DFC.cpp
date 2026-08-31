#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80569DFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80569DFC;

loc_80569DFC:
{
    r4 = MemoryInline::FlatRead32((r3 + 228));
    r0 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80569E08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80569E94;
    }
}

loc_80569E0C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 224));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 208));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80569E20:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80569E68;
    }
}

loc_80569E24:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 212));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 216));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 212), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80569E3C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80569E44;
    }
}

loc_80569E40:
{
    MemoryInline::FlatWriteFloat32((r3 + 212), f1.d);
}

loc_80569E44:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 216));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 220));
    r4 = MemoryInline::FlatRead32((r3 + 228));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 216), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80569E60:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80569E68;
    }
}

loc_80569E64:
{
    MemoryInline::FlatWriteFloat32((r3 + 216), f1.d);
}

loc_80569E68:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 208));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 212));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 224));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 208), f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80569E80:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80569E90;
    }
}

loc_80569E84:
{
    MemoryInline::FlatWriteFloat32((r3 + 208), f2.d);
    r0 = 1;
    goto loc_80569E94;
}

loc_80569E90:
{
    r0 = 0;
}

loc_80569E94:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80569DFC func_80569DFC preserves=true fpr_mask=0x00000000
