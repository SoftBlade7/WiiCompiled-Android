#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D3D58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807D3D58;

loc_807D3D58:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 26416);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 1196));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D3D80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D3E50;
    }
}

loc_807D3D84:
{
    // inline leaf 0x80590DC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 176));
    // end of inlined leaf 0x80590DC0
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 2676u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2660u, (r31 + 2660));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D3D90:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D3E50;
    }
}

loc_807D3D94:
{
    r0 = MemoryInline::FlatRead16((r30 + 244));
}

loc_807D3D9C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_807D3DB0;
    }
}

loc_807D3DA0:
{
}

loc_807D3DA4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_807D3DB0;
    }
}

loc_807D3DA8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_807D3DAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D3E50;
    }
}

loc_807D3DB0:
{
    r3 = r30;
    // inline leaf 0x80590DC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 176));
    // end of inlined leaf 0x80590DC0
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2648u, (r31 + 2648));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
        }
    }
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    SetCRFloatResident(cr, 0, f2.d, f3.d);
}

loc_807D3DCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D3DD8;
    }
}

loc_807D3DD0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2672u, (r31 + 2672));
    goto loc_807D3DEC;
}

loc_807D3DD8:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2672u, (r31 + 2672));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
}

loc_807D3DEC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2672u, (r31 + 2672));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807D3DF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807D3DFC;
    }
}

loc_807D3DF8:
{
    goto loc_807D3E10;
}

loc_807D3DFC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807D3E04:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D3E0C;
    }
}

loc_807D3E08:
{
    goto loc_807D3E10;
}

loc_807D3E0C:
{
    f1.d = f0.d;
}

loc_807D3E10:
{
    r5 = MemoryInline::FlatRead32((r30 + 1196));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_807D3E1C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807D3E50;
    }
}

loc_807D3E20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(60));
}

loc_807D3E24:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807D3E30;
    }
}

loc_807D3E28:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 17), static_cast<uint8_t>(r0));
}

loc_807D3E30:
{
    r4 = 0;
    MemoryInline::FlatWrite32((r5 + 4), r4);
    r3 = 6;
    r0 = 2;
    MemoryInline::FlatWrite32(r5, r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    MemoryInline::FlatWriteFloat32((r5 + 12), f1.d);
    MemoryInline::FlatWrite8((r5 + 16), static_cast<uint8_t>(r4));
}

loc_807D3E50:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000003B gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807D3D58 func_807D3D58 preserves=true fpr_mask=0x00000000
