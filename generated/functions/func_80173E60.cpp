#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80173E60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80173E60;

loc_80173E60:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80173E68:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80173E6C:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80173E74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80173F04;
    }
}

loc_80173E78:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80173E8C;
    }
}

loc_80173E7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80173E80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80173E98;
    }
}

loc_80173E84:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80173ED4;
    }
}

loc_80173E88:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_80173E8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80173E90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80173E94:
{
    goto loc_80173F38;
}

loc_80173E98:
{
    r4 = 0x80250000u;
    f3.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 10016));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80173EB8:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80173EC4:
{
    r0 = 0;
    MemoryInline::FlatWriteFloat32((r3 + 12), f2.d);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_80173ED4:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80173EE8:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80173EF4:
{
    r0 = 0;
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_80173F04:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_80173F18:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f2.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80173F24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_80173F38:
{
    r0 = MemoryInline::FlatRead8((r3 + 28));
}

loc_80173F40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80173F80;
    }
}

loc_80173F44:
{
    r4 = 0x80250000u;
    f3.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 10016));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80173F64:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80173F70:
{
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 12), f2.d);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_80173F80:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80173F94:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80173FA0:
{
    r0 = 0;
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80173E60 func_80173E60 preserves=true fpr_mask=0x00000000
