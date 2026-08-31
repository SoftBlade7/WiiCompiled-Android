#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80730DB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_80730DB4;

loc_80730DB4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 9864);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r30 = MemoryInline::FlatRead32(r3);
    r3 = r30;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f2.d = MemoryInline::FlatReadFloat32(r29);
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 12u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80730DF4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80730E00;
    }
}

loc_80730DF8:
{
    f2.d = f0.d;
    goto loc_80730E10;
}

loc_80730E00:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80730E08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80730E10;
    }
}

loc_80730E0C:
{
    f2.d = f0.d;
}

loc_80730E10:
{
    r0 = MemoryInline::FlatRead8((r29 + 8));
}

loc_80730E18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80730E38;
    }
}

loc_80730E1C:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80730E28:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80730E34;
    }
}

loc_80730E2C:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    goto loc_80730E38;
}

loc_80730E34:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
}

loc_80730E38:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 652), f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80730E48:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80730E54;
    }
}

loc_80730E4C:
{
    MemoryInline::FlatWriteFloat32((r3 + 652), f1.d);
    goto loc_80730E68;
}

loc_80730E54:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 652));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80730E60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80730E68;
    }
}

loc_80730E64:
{
    MemoryInline::FlatWriteFloat32((r3 + 652), f1.d);
}

loc_80730E68:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 20), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 24), f1.d);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000001A gpr_write=0xE000000B gpr_return=0x00000008 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80730DB4 func_80730DB4 preserves=true fpr_mask=0x00000000
