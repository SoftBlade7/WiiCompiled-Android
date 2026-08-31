#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800648C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_11 = 0;
    uint32_t r3_psq_tmp_12 = 0;
    uint32_t r3_psq_tmp_13 = 0;
    uint32_t r3_psq_tmp_14 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_psq_tmp_9 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800648C0;

loc_800648C0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0;
    r5 = 108;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x802C0000u;
    r31 = (r31 + -32704);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r6 = (r31 + 0);
    r30 = 0;
    r3 = (r31 + 12);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 2;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = 1;
    MemoryInline::FlatWrite8((r13 + -27328), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam8((r6 + 1), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteRam8((r6 + 2), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam8((r6 + 3), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteRam32((r6 + 4), r29);
    MemoryInline::FlatWriteRam32((r6 + 8), r30);
    ctx->lr = 0x80064920u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r10 = (r31 + 528);
    r7 = (r31 + 576);
    r11 = (r31 + 516);
    r9 = (r31 + 560);
    r8 = 0x80060000u;
    r3 = (r31 + 128);
    r12 = (r31 + 416);
    r6 = 0x80060000u;
    r6 = (r6 + 4224);
    r5 = 0x80060000u;
    r4 = 0x80060000u;
    r8 = (r8 + 6576);
    r5 = (r5 + 5216);
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 256), 0, 196u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r3 + 256), static_cast<uint8_t>(r30));
    r4 = (r4 + 5488);
    r0 = 251;
    r3 = 40;
    MemoryInline::WriteResolved16(guest_range_2, 128u, (r12 + 96), static_cast<uint16_t>(r30));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 140u, (r11 + 8), r30);
        MemoryInline::WriteResolved32(guest_range_2, 136u, (r11 + 4), r30);
    }
    MemoryInline::WriteResolved32(guest_range_2, 132u, (r31 + 516), r30);
    MemoryInline::FlatWrite8((r13 + -27324), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite32((r13 + -27320), r30);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 172u, (r10 + 28), r30);
        MemoryInline::WriteResolved32(guest_range_2, 168u, (r10 + 24), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 160u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 164u, (r10 + 20), r30);
        MemoryInline::WriteResolved32(guest_range_2, 160u, (r10 + 16), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 156u, (r10 + 12), r30);
        MemoryInline::WriteResolved32(guest_range_2, 152u, (r10 + 8), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 148u, (r10 + 4), r30);
        MemoryInline::WriteResolved32(guest_range_2, 144u, (r31 + 528), r30);
    }
    MemoryInline::FlatWrite32((r13 + -27316), r30);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 176u, (r31 + 560), r30);
        MemoryInline::WriteResolved32(guest_range_2, 180u, (r9 + 4), r30);
    }
    MemoryInline::WriteResolved32(guest_range_2, 184u, (r9 + 8), r30);
    MemoryInline::WriteResolved32(guest_range_2, 192u, (r31 + 576), r8);
    guest_range_0 = MemoryInline::ResolveRangeHost((r7 + 4), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r7 + 4), r30);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r7 + 8), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r7 + 12), r28);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r7 + 16), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r7 + 20), r29);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r7 + 24), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r7 + 28), r28);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r7 + 32), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r7 + 36), r28);
    ctr = r0;
}

loc_800649D8:
{
    r7_addr_2 = (r7 + r3);
    MemoryInline::FlatWrite32(r7_addr_2, r8);
    r4 = (r7 + r3);
    r3 = (r3 + 8);
    MemoryInline::FlatWrite32((r4 + 4), r30);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800649D8;
    }
}

loc_800649EC:
{
    r29 = (r31 + 2624);
    r3 = 0;
    r0 = -1;
    MemoryInline::FlatWriteRam32((r31 + 2624), r3);
    r28 = 0;
    r30 = 0;
    MemoryInline::FlatWriteRam32((r29 + 4), r0);
}

loc_80064A08:
{
    r4 = (r29 + r30);
    r3 = (r1 + 8);
    r4 = (r4 + 8);
    // inline leaf 0x800774D0 (2 guest instruction(s))
    MemoryInline::FlatWriteRam32(r3, r4);
    // end of inlined leaf 0x800774D0
    // inline leaf 0x800774E0 (28 guest instruction(s))
}

loc_inl1_0x800774E0:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_inl1_0x800774E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x800774EC:
{
    r0 = 0;
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, r3, r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29256));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r3 + 8), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r3 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r3 + 16), f0.d);
    }
    MemoryInline::WriteResolved8(guest_range_3, 23u, (r3 + 23), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 22u, (r3 + 22), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 21u, (r3 + 21), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 20u, (r3 + 20), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 24u, (r3 + 24), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 25u, (r3 + 25), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 26u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 26u, (r3 + 26), r0);
        MemoryInline::WriteResolved16(guest_range_3, 28u, (r3 + 28), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 30u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 30u, (r3 + 30), r0);
        MemoryInline::WriteResolved16(guest_range_3, 32u, (r3 + 32), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 34u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 34u, (r3 + 34), r0);
        MemoryInline::WriteResolved16(guest_range_3, 36u, (r3 + 36), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 38u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 38u, (r3 + 38), r0);
        MemoryInline::WriteResolved16(guest_range_3, 40u, (r3 + 40), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 42u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 42u, (r3 + 42), r0);
        MemoryInline::WriteResolved16(guest_range_3, 44u, (r3 + 44), r0);
    }
    MemoryInline::WriteResolved16(guest_range_3, 46u, (r3 + 46), static_cast<uint16_t>(r0));
    goto loc_inl1_cont_800774E0;
}

loc_inl1_return:
{
}

loc_inl1_cont_800774E0:
{
    // end of inlined leaf 0x800774E0
    r28 = (r28 + 1);
    r30 = (r30 + 48);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(32));
}

loc_80064A28:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80064A08;
    }
}

loc_80064A2C:
{
    r28 = (r31 + 4168);
    r6 = 128;
    r3 = r28;
    r8 = 128;
    r4 = (r28 + 44);
    r5 = (r28 + 8748);
    r7 = (r28 + 9260);
    ctx->lr = 0x80064A4Cu;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80077930u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x80060000u;
    r5 = 0x80060000u;
    r3 = (r28 + 44);
    r6 = 68;
    r4 = (r4 + 6768);
    r5 = (r5 + 6704);
    r7 = 128;
    ctx->lr = 0x80064A6Cu;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80020FF4u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r0 = -1;
    r30 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r28 + 16), 0, 28u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r28 + 16), r0);
    r3 = (r31 + 14964);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r28 + 20), r30);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r28 + 24), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r28 + 28), r30);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r28 + 32), r30);
    }
    MemoryInline::WriteResolved8(guest_range_1, 27u, (r28 + 43), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 26u, (r28 + 42), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 25u, (r28 + 41), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 24u, (r28 + 40), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 23u, (r28 + 39), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r28 + 38), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r28 + 37), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r28 + 36), static_cast<uint8_t>(r0));
    ctx->lr = 0x80064AB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[11] = r11;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80061FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r11 = ctx->gpr[11];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r28 = (r31 + 21736);
    r4 = (r13 + -27304);
    r3 = 0x80270000u;
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r30));
    r3 = (r3 + 12384);
    r4 = (r28 + 8);
    MemoryInline::FlatWrite32((r13 + -27304), r30);
    r0 = (r28 + 152);
    MemoryInline::FlatWriteRam32(r28, r3);
    // nop
}

loc_80064AD8:
{
    r4 = (r4 + 48);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80064AE0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80064AD8;
    }
}

loc_80064AE4:
{
    r3 = (r28 + 8);
    // inline leaf 0x80199D04 (11 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26412));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26416));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0, PPC_PsFromScalarInline(f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge10Inline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsMerge01Inline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4, f2.d);
    // end of inlined leaf 0x80199D04
    r3 = (r28 + 56);
    // inline leaf 0x80199D04 (11 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26412));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26416));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5, PPC_PsFromScalarInline(f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge10Inline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsMerge01Inline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_6 = (r3 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_6, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_7 = (r3 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_7, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_8 = (r3 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_8, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_9 = (r3 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_9, f2.d);
    // end of inlined leaf 0x80199D04
    r3 = (r28 + 104);
    // inline leaf 0x80199D04 (11 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26412));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26416));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_10 = (r3 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_10, PPC_PsFromScalarInline(f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge10Inline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsMerge01Inline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_11 = (r3 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_11, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_12 = (r3 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_12, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_13 = (r3 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_13, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_14 = (r3 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_14, f2.d);
    // end of inlined leaf 0x80199D04
    r0 = 0;
    MemoryInline::FlatWriteRam8((r28 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r28 + 5), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r28 + 4), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r28 + 7), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF9F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800648C0 func_800648C0 preserves=true fpr_mask=0x00000000
