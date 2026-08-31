#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800C4D60_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_800C4DC0_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_800C4D60_statefree_v0(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_800C4DC0_statefree_v0(uint32_t, uint32_t, uint32_t);

extern "C" void func_800C0700(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800C0700;

loc_800C0700:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 80);
    // inline leaf 0x80021590 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -4), r31);
    // end of inlined leaf 0x80021590
    r29 = r6;
    MemoryInline::FlatWrite32((r3 + 100), r6);
    r31 = r3;
    r28 = r4;
    r23 = r5;
    r30 = r7;
    r3 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C4DC0u) && KnownTranslatedCpuCall<0x800C4DC0u>::kAvailable && !KnownTranslatedCpuCall<0x800C4DC0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C4DC0u>()) {
        const auto state_free_result_800C4DC0_F26 = func_800C4DC0_statefree_v0(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_800C4DC0_F26[0]);
        cr = static_cast<uint32_t>(state_free_result_800C4DC0_F26[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800C4DC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r26 = r3;
    r3 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C4D60u) && KnownTranslatedCpuCall<0x800C4D60u>::kAvailable && !KnownTranslatedCpuCall<0x800C4D60u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C4D60u>()) {
        const auto state_free_result_800C4D60_170D = func_800C4D60_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_800C4D60_170D);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800C4D60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r4 = 0;
    r5 = 1;
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r6 = (r23 + 65536);
    r4 = (r30 & r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    MemoryInline::FlatWrite32((r31 + 104), r23);
    r4 = (r6 + -32129);
    r27 = r3;
    r0 = 0;
    r6 = (r4 & -32);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C0780;
    }
}

loc_800C0774:
{
    MemoryInline::FlatWrite32((r31 + 108), r6);
    r6 = (r6 + 32);
    goto loc_800C0784;
}

loc_800C0780:
{
    MemoryInline::FlatWrite32((r31 + 108), r0);
}

loc_800C0784:
{
    r4 = 1;
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r4 = (r30 & r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800C07A0;
    }
}

loc_800C0794:
{
    MemoryInline::FlatWrite32((r31 + 112), r6);
    r6 = (r6 + 32);
    goto loc_800C07A4;
}

loc_800C07A0:
{
    MemoryInline::FlatWrite32((r31 + 112), r0);
}

loc_800C07A4:
{
    r4 = 2;
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r4 = (r30 & r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800C07C0;
    }
}

loc_800C07B4:
{
    MemoryInline::FlatWrite32((r31 + 116), r6);
    r6 = (r6 + 32);
    goto loc_800C07C4;
}

loc_800C07C0:
{
    MemoryInline::FlatWrite32((r31 + 116), r0);
}

loc_800C07C4:
{
    r4 = 3;
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r4 = (r30 & r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800C07E0;
    }
}

loc_800C07D4:
{
    MemoryInline::FlatWrite32((r31 + 120), r6);
    r6 = (r6 + 32);
    goto loc_800C07E4;
}

loc_800C07E0:
{
    MemoryInline::FlatWrite32((r31 + 120), r0);
}

loc_800C07E4:
{
    r4 = 4;
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r4 = (r30 & r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800C0800;
    }
}

loc_800C07F4:
{
    MemoryInline::FlatWrite32((r31 + 124), r6);
    r6 = (r6 + 32);
    goto loc_800C0804;
}

loc_800C0800:
{
    MemoryInline::FlatWrite32((r31 + 124), r0);
}

loc_800C0804:
{
    r4 = 5;
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r4 = (r30 & r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800C0820;
    }
}

loc_800C0814:
{
    MemoryInline::FlatWrite32((r31 + 128), r6);
    r6 = (r6 + 32);
    goto loc_800C0824;
}

loc_800C0820:
{
    MemoryInline::FlatWrite32((r31 + 128), r0);
}

loc_800C0824:
{
    r4 = 6;
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r4 = (r30 & r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800C0840;
    }
}

loc_800C0834:
{
    MemoryInline::FlatWrite32((r31 + 132), r6);
    r6 = (r6 + 32);
    goto loc_800C0844;
}

loc_800C0840:
{
    MemoryInline::FlatWrite32((r31 + 132), r0);
}

loc_800C0844:
{
    r3 = 0;
    r4 = 1;
    r3 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
    r5 = (r6 + 31);
    r3 = (r30 & r3);
    r0 = 0;
    r5 = (r5 & -32);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800C0870;
    }
}

loc_800C0864:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r5 = (r5 + r26);
    goto loc_800C0874;
}

loc_800C0870:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
}

loc_800C0874:
{
    r3 = 1;
    r3 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
    r3 = (r30 & r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800C0890;
    }
}

loc_800C0884:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    r5 = (r5 + r26);
    goto loc_800C0894;
}

loc_800C0890:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
}

loc_800C0894:
{
    r3 = 2;
    r3 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
    r3 = (r30 & r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800C08B0;
    }
}

loc_800C08A4:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r5);
    r5 = (r5 + r26);
    goto loc_800C08B4;
}

loc_800C08B0:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
}

loc_800C08B4:
{
    r3 = 3;
    r3 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
    r3 = (r30 & r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800C08D0;
    }
}

loc_800C08C4:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    r5 = (r5 + r26);
    goto loc_800C08D4;
}

loc_800C08D0:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_800C08D4:
{
    r3 = 4;
    r3 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
    r3 = (r30 & r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800C08F0;
    }
}

loc_800C08E4:
{
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    r5 = (r5 + r26);
    goto loc_800C08F4;
}

loc_800C08F0:
{
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
}

loc_800C08F4:
{
    r3 = 5;
    r3 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
    r3 = (r30 & r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800C0910;
    }
}

loc_800C0904:
{
    MemoryInline::FlatWriteRam32((r1 + 28), r5);
    r5 = (r5 + r26);
    goto loc_800C0914;
}

loc_800C0910:
{
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
}

loc_800C0914:
{
    r3 = 6;
    r3 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
    r3 = (r30 & r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C092C;
    }
}

loc_800C0924:
{
    MemoryInline::FlatWriteRam32((r1 + 32), r5);
    goto loc_800C0930;
}

loc_800C092C:
{
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
}

loc_800C0930:
{
    r3 = MemoryInline::FlatRead32((r31 + 104));
    r4 = r28;
    ctx->lr = 0x800C093Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C1730u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800C0940:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -27772));
    r24 = 0;
    r23 = 0;
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(96))) {
        goto loc_800C0964;
    }
}

loc_800C0950:
{
}

loc_800C0954:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(224))) {
        goto loc_800C0970;
    }
}

loc_800C0958:
{
}

loc_800C095C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(480))) {
        goto loc_800C097C;
    }
}

loc_800C0960:
{
    goto loc_800C0984;
}

loc_800C0964:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -27768));
    r23 = 1;
    goto loc_800C0984;
}

loc_800C0970:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -27764));
    r23 = 1;
    goto loc_800C0984;
}

loc_800C097C:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -27760));
    r23 = 1;
}

loc_800C0984:
{
    r26 = r31;
    r30 = (r1 + 8);
    r25 = 0;
}

loc_800C0990:
{
    r3 = MemoryInline::FlatRead32((r26 + 108));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C0998:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C0A28;
    }
}

loc_800C099C:
{
    r5 = (r27 & 65535);
    r4 = MemoryInline::FlatRead32(r30);
    r10 = r23;
    r7 = 5;
    r6 = r5;
    r8 = 0;
    r9 = 0;
    ctx->lr = 0x800C09BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801707F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800C09C0:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_800C09F0;
    }
}

loc_800C09C4:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -27772));
    f2.d = f31.d;
    r3 = MemoryInline::FlatRead32((r26 + 108));
    r4 = 5;
    f3.d = f1.d;
    r5 = 1;
    r6 = 0;
    r7 = 0;
    r8 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80170A4Cu>(ctx);
    goto loc_800C0A18;
}

loc_800C09F0:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -27772));
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r26 + 108));
    r5 = 1;
    f2.d = f1.d;
    r6 = 0;
    f3.d = f1.d;
    r7 = 0;
    r8 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80170A4Cu>(ctx);
}

loc_800C0A18:
{
}

loc_800C0A1C:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(0))) {
        goto loc_800C0A28;
    }
}

loc_800C0A20:
{
    MemoryInline::FlatWrite32((r31 + 96), r25);
    r24 = 1;
}

loc_800C0A28:
{
    r25 = (r25 + 1);
    r30 = (r30 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(7));
}

loc_800C0A34:
{
    r26 = (r26 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800C0990;
    }
}

loc_800C0A3C:
{
    r3 = r28;
    r5 = r29;
    r4 = (r1 + 8);
    ctx->lr = 0x800C0A4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C2680u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 80);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800C0700 func_800C0700 preserves=false fpr_mask=0x80000000
