#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8056B218(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8056B2F0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8056B218;

loc_8056B218:
{
    MemoryInline::FlatWriteRam32((r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    MemoryInline::FlatWriteRam32((r1 + 204), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 5688);
    MemoryInline::FlatWriteRam32((r1 + 200), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 196), r29);
    r29 = 0x809C0000u;
    r29 = (r29 + 6304);
    MemoryInline::FlatWriteRam32((r1 + 192), r28);
    r28 = (r3 + 16);
    r0 = MemoryInline::FlatRead8((r3 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8056B254:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056B334;
    }
}

loc_8056B258:
{
    r0 = MemoryInline::FlatRead32(r28);
    r5 = (r29 + 0);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 44));
    r3 = (r1 + 12);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r4 = (r1 + 104);
    r5_addr_1 = (r5 + r0);
    r0 = MemoryInline::FlatRead32(r5_addr_1);
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    ctx->lr = 0x8056B280u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80055540u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 104);
    r4 = (r1 + 16);
    // inline leaf 0x800555C0 (15 guest instruction(s))
}

loc_inl0_0x800555C0:
{
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 8);
}

loc_inl0_0x800555C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x800555E0;
    }
}

loc_inl0_0x800555CC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29788));
    MemoryInline::FlatWriteRamFloat32(r4, f0.d);
    MemoryInline::FlatWriteRamFloat32((r4 + 4), f0.d);
    MemoryInline::FlatWriteRamFloat32((r4 + 8), f0.d);
    goto loc_inl0_cont_800555C0;
}

loc_inl0_0x800555E0:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    MemoryInline::FlatWriteRamFloat32(r4, f2.d);
    MemoryInline::FlatWriteRamFloat32((r4 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r4 + 8), f0.d);
}

loc_inl0_cont_800555C0:
{
    // end of inlined leaf 0x800555C0
    f1.d = MemoryInline::FlatReadFloat32((r28 + 16));
    r3 = (r29 + 24);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r0 = MemoryInline::FlatRead32(r28);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f5.d = MemoryInline::FlatReadFloat32((r28 + 20));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    f4.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 44));
    MemoryInline::FlatWriteFloat32((r28 + 28), f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r28 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 12));
    f5.d = PpcFmulsInline(f5.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 112));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    MemoryInline::FlatWriteFloat32((r28 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 44), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 36), f0.d);
    addr_lfsx_8056B2F0_loc_0 = (r3 + r4);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8056B2F0_loc_0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8056B2F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8056B334;
    }
}

loc_8056B2FC:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r28 + 4), 0, 37u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r28 + 40), static_cast<uint8_t>(r0));
    r3 = (r28 + r4);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 64));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r28 + 36), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r28 + 32), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r28 + 28), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r28 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r28 + 8), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r28 + 4), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r28 + 24), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r28 + 20), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r28 + 16), f0.d);
}

loc_8056B334:
{
    r0 = MemoryInline::FlatRead8((r30 + 100));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8056B33C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056B43C;
    }
}

loc_8056B340:
{
    r0 = MemoryInline::FlatRead32((r30 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_8056B348:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056B43C;
    }
}

loc_8056B34C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8056B350:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8056B398;
    }
}

loc_8056B354:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 112));
    r3 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 116));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 112), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20652));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8056B370:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8056B380;
    }
}

loc_8056B374:
{
    MemoryInline::FlatWriteFloat32((r30 + 112), f1.d);
    r0 = 1;
    goto loc_8056B384;
}

loc_8056B380:
{
    r0 = 0;
}

loc_8056B384:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8056B388:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056B43C;
    }
}

loc_8056B38C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 100), static_cast<uint8_t>(r0));
    goto loc_8056B43C;
}

loc_8056B398:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 104));
    r3 = (r1 + 8);
    r0 = MemoryInline::FlatRead32((r29 + 16));
    r4 = (r1 + 28);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r5 = 0;
    ctx->lr = 0x8056B3B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80055540u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 28);
    r4 = (r30 + 108);
    // inline leaf 0x800555C0 (15 guest instruction(s))
}

loc_inl1_0x800555C0:
{
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 8);
}

loc_inl1_0x800555C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x800555E0;
    }
}

loc_inl1_0x800555CC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29788));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    goto loc_inl1_cont_800555C0;
}

loc_inl1_0x800555E0:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    MemoryInline::FlatWriteFloat32(r4, f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
}

loc_inl1_cont_800555C0:
{
    // end of inlined leaf 0x800555C0
    r0 = MemoryInline::FlatRead32((r29 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8056B3C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8056B3F8;
    }
}

loc_8056B3CC:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r6 = 0x808B0000u;
    r7 = 0x808B0000u;
    r3 = (r3 + 18372);
    r5 = (r5 + 18344);
    r6 = (r6 + 18332);
    r7 = (r7 + 20760);
    r4 = 39;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8056B3F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80025FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8056B3F8:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 184), r0);
    r0 = MemoryInline::FlatRead16((r3 + 32));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 104));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 112));
    f1.d = MemoryInline::FlatReadFloat64((r31 + 104));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 104), f2.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8056B430:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8056B43C;
    }
}

loc_8056B434:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 100), static_cast<uint8_t>(r0));
}

loc_8056B43C:
{
    r0 = MemoryInline::FlatRead32((r1 + 212));
    r31 = MemoryInline::FlatRead32((r1 + 204));
    r30 = MemoryInline::FlatRead32((r1 + 200));
    r29 = MemoryInline::FlatRead32((r1 + 196));
    r28 = MemoryInline::FlatRead32((r1 + 192));
    ctx->lr = r0;
    r1 = (r1 + 208);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8056B218 func_8056B218 preserves=true fpr_mask=0x00000000
