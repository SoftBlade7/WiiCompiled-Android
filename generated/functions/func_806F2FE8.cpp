#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F2FE8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_806F3070_loc_0 = 0;
    uint32_t addr_lfsx_806F3120_loc_0 = 0;
    uint32_t addr_stfsx_806F3064_loc_0 = 0;
    uint32_t addr_stfsx_806F30A0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806F2FE8;

loc_806F2FE8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 32u, (r1 + 32), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r30 = 0x808A0000u;
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r4));
    r30 = (r30 + 2912);
    r31 = r3;
    f0.d = MemoryInline::FlatReadFloat32(r30);
    r27 = r5;
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 44), f0.d);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & 1020);
    ctx->lr = 0x806F303Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32(r30);
    r5 = 0;
    MemoryInline::FlatWrite32((r31 + 72), r3);
    r4 = 0;
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    goto loc_806F3080;
}

loc_806F3054:
{
    r3 = MemoryInline::FlatRead32((r31 + 72));
    r5 = (r5 + 1);
    f0.d = MemoryInline::FlatReadFloat32(r27);
    r27 = (r27 + 4);
    addr_stfsx_806F3064_loc_0 = (r3 + r4);
    MemoryInline::FlatWriteFloat32(addr_stfsx_806F3064_loc_0, f0.d);
    r3 = MemoryInline::FlatRead32((r31 + 72));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 76));
    addr_lfsx_806F3070_loc_0 = (r3 + r4);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_806F3070_loc_0);
    r4 = (r4 + 4);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
}

loc_806F3080:
{
    r3 = MemoryInline::FlatRead8((r31 + 16));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_806F308C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806F3054;
    }
}

loc_806F3090:
{
    r4 = MemoryInline::FlatRead32((r31 + 72));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    f0.d = MemoryInline::FlatReadFloat32(r30);
    r3 = r31;
    addr_stfsx_806F30A0_loc_0 = (r4 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_806F30A0_loc_0, f0.d);
    r4 = 0;
    // inline leaf 0x800AEF60 (6 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r4));
    // end of inlined leaf 0x800AEF60
    r0 = MemoryInline::FlatRead8((r31 + 16));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    ctx->lr = 0x806F30B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r29 = MemoryInline::FlatRead8((r31 + 16));
    MemoryInline::FlatWrite32((r31 + 12), r3);
    r3 = (r29 * 12);
    r3 = (r3 + 16);
    ctx->lr = 0x806F30CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x805A0000u;
    r5 = 0x80510000u;
    r7 = r29;
    r6 = 12;
    r4 = (r4 + 8112);
    r5 = (r5 + 13824);
    ctx->lr = 0x806F30E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80020E34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r31 + 36), r3);
    r27 = 0;
    f29.d = MemoryInline::FlatReadFloat32(r30);
    r28 = 0;
    f30.d = MemoryInline::FlatReadFloat32((r30 + 4));
    r29 = 1;
    f31.d = MemoryInline::FlatReadFloat32((r30 + 8));
    r30 = 0;
    goto loc_806F31B4;
}

loc_806F310C:
{
    r3 = 124;
    ctx->lr = 0x806F3114u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806F3118:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806F3194;
    }
}

loc_806F311C:
{
    r4 = MemoryInline::FlatRead32((r31 + 72));
    addr_lfsx_806F3120_loc_0 = (r4 + r28);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_806F3120_loc_0);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 112u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r3 + 8), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r3 + 12), f29.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 24), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r3 + 20), f29.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r3 + 16), f29.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 36), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 32), f29.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 28), f29.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 48), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r3 + 44), f29.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 40), f29.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r3 + 60), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r3 + 56), f29.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r3 + 52), f29.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r3 + 72), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r3 + 68), f29.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r3 + 64), f29.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f30.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r3 + 76), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r3 + 80), f30.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r3 + 84), f29.d);
    MemoryInline::WriteResolved8(guest_range_1, 80u, (r3 + 88), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r3 + 92), f29.d);
    MemoryInline::WriteResolved8(guest_range_1, 88u, (r3 + 96), static_cast<uint8_t>(r30));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 92u, (r3 + 100), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 96u, (r3 + 104), f29.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 100u, (r3 + 108), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 104u, (r3 + 112), f29.d);
    }
    MemoryInline::WriteResolved32(guest_range_1, 108u, (r3 + 116), r30);
}

loc_806F3194:
{
    r4 = MemoryInline::FlatRead32((r31 + 12));
    r4_addr_2 = (r4 + r28);
    MemoryInline::FlatWrite32(r4_addr_2, r3);
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r31 + 12));
    r4_addr_3 = (r4 + r28);
    r4 = MemoryInline::FlatRead32(r4_addr_3);
    // inline leaf 0x800AEF80 (28 guest instruction(s))
}

loc_inl2_0x800AEF80:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl2_0x800AEF88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800AEFB8;
    }
}

loc_inl2_0x800AEF8C:
{
    r5 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r5 = (r4 + r5);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    MemoryInline::FlatWrite32(r5, r0);
    r5 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWrite32(r3, r4);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    goto loc_inl2_cont_800AEF80;
}

loc_inl2_0x800AEFB8:
{
    r6 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r6_addr_2 = (r6 + r4);
    MemoryInline::FlatWrite32(r6_addr_2, r5);
    r6 = r6_addr_2;
    MemoryInline::FlatWrite32((r6 + 4), r0);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r5 = (r5 + r0);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    r5 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
}

loc_inl2_cont_800AEF80:
{
    // end of inlined leaf 0x800AEF80
    r28 = (r28 + 4);
    r27 = (r27 + 1);
}

loc_806F31B4:
{
    r0 = MemoryInline::FlatRead8((r31 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r0));
}

loc_806F31BC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806F310C;
    }
}

loc_806F31C0:
{
    r3 = r31;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 76u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 52u, (r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 36u, (r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 20u, (r1 + 32));
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::ReadResolved32(guest_range_2, 72u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806F2FE8 func_806F2FE8 preserves=false fpr_mask=0xE0000000
