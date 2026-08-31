#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_805CD94C_statefree(uint32_t);

extern "C" void func_806261E8(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t ctr = ctx->ctr;

    goto loc_806261E8;

loc_806261E8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    ctx->lr = 0x80626208u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x8060197Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    r3 = 0x808E0000u;
    r31 = 0;
    r3 = (r3 + -29320);
    r29 = (r30 + 84);
    MemoryInline::FlatWrite32(r30, r3);
    r3 = r29;
    MemoryInline::FlatWrite32((r30 + 76), r31);
    ctx->lr = 0x80626228u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x805BD3A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    r3 = 0x80890000u;
    r4 = 0x808D0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 32144));
    r4 = (r4 + 14156);
    r0 = 2001;
    MemoryInline::FlatWrite32(r29, r4);
    r3 = (r30 + 788);
    MemoryInline::FlatWrite32((r29 + 596), r0);
    MemoryInline::FlatWrite32((r29 + 600), r31);
    MemoryInline::FlatWriteFloat32((r29 + 604), f0.d);
    MemoryInline::FlatWrite32((r30 + 784), r31);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_CD5 = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_CD5[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_CD5[1]);
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
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805CD94Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        ctr = ctx->ctr;
    }
    r12 = -1;
    r3 = 2;
    r0 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 1069u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 984u, (r30 + 984), r3);
    r7 = 0x808C0000u;
    r6 = 0x808C0000u;
    MemoryInline::WriteResolved8(guest_range_0, 988u, (r30 + 988), static_cast<uint8_t>(r0));
    r5 = 0x808C0000u;
    r4 = 0x808E0000u;
    r6 = (r6 + -11484);
    MemoryInline::WriteResolved8(guest_range_0, 989u, (r30 + 989), static_cast<uint8_t>(r31));
    r8 = 0x808C0000u;
    r5 = (r5 + -11496);
    r4 = (r4 + -25016);
    MemoryInline::WriteResolved32(guest_range_0, 996u, (r30 + 996), r12);
    r3 = (r30 + 1076);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1000u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1000u, (r30 + 1000), r12);
        MemoryInline::WriteResolved32(guest_range_0, 1004u, (r30 + 1004), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1012u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1012u, (r30 + 1012), r12);
        MemoryInline::WriteResolved32(guest_range_0, 1016u, (r30 + 1016), r31);
    }
    r7 = (r7 + -16828);
    r11 = MemoryInline::FlatRead32(r7);
    MemoryInline::FlatWriteRam32((r1 + 8), r11);
    r10 = MemoryInline::FlatRead32((r7 + 4));
    r9 = MemoryInline::FlatRead32((r7 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 1036u, (r30 + 1036), r9);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1020u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1020u, (r30 + 1020), r6);
        MemoryInline::WriteResolved32(guest_range_0, 1024u, (r30 + 1024), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1028u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1028u, (r30 + 1028), r11);
        MemoryInline::WriteResolved32(guest_range_0, 1032u, (r30 + 1032), r10);
    }
    r8 = (r8 + -16816);
    r7 = MemoryInline::FlatRead32(r8);
    MemoryInline::FlatWriteRam32((r1 + 12), r10);
    r6 = MemoryInline::FlatRead32((r8 + 4));
    r0 = MemoryInline::FlatRead32((r8 + 8));
    MemoryInline::FlatWriteRam32((r1 + 16), r9);
    MemoryInline::FlatWriteRam32((r1 + 20), r7);
    MemoryInline::FlatWriteRam32((r1 + 24), r6);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1040u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1040u, (r30 + 1040), r5);
        MemoryInline::WriteResolved32(guest_range_0, 1044u, (r30 + 1044), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1048u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1048u, (r30 + 1048), r7);
        MemoryInline::WriteResolved32(guest_range_0, 1052u, (r30 + 1052), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1056u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1056u, (r30 + 1056), r0);
        MemoryInline::WriteResolved32(guest_range_0, 1060u, (r30 + 1060), r12);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1064u, (r30 + 1064), r31);
    MemoryInline::WriteResolved8(guest_range_0, 1068u, (r30 + 1068), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 0u, r30, r4);
    // inline leaf 0x805EEB68 (9 guest instruction(s))
    r4 = 0x808C0000u;
    r0 = 0;
    r4 = (r4 + -25960);
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 14), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805EEB68
    r12 = MemoryInline::FlatRead32((r30 + 1076));
    r3 = (r30 + 1076);
    r4 = 0;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80626330u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    ctr = ctx->ctr;
    r3 = r30;
    r4 = (r30 + 1076);
    // inline leaf 0x80602474 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 56), r4);
    // end of inlined leaf 0x80602474
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE00E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFC fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806261E8 func_806261E8 preserves=true fpr_mask=0x00000000
