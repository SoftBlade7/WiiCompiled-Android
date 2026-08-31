#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807B860C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
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
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807B860C;

loc_807B860C:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -352), 0, 360u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -352), r1);
    r1 = (r1 + -352);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 356u, (r1 + 356), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 336u, (r1 + 336), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 344);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 336);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 316u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 316u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_2, 320u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 324u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 324u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_2, 328u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_2, 332u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    r3 = MemoryInline::FlatRead32((r3 + 44));
}

loc_807B8638:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807B8644;
    }
}

loc_807B863C:
{
    r31 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_807B8648;
}

loc_807B8644:
{
    r31 = 0;
}

loc_807B8648:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    r3 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807B8658:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B8664;
    }
}

loc_807B865C:
{
    r30 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_807B8668;
}

loc_807B8664:
{
    r30 = 0;
}

loc_807B8668:
{
    r3 = r31;
    ctx->lr = 0x807B8670u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x809C0000u;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_807B8678:
{
    MemoryInline::FlatWriteRam32((r4 + 13928), r3);
    r3 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_807B875C;
    }
}

loc_807B8684:
{
}

loc_807B8688:
{
    r7 = (r31 + -8);
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(8))) {
        goto loc_807B8734;
    }
}

loc_807B8690:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_807B86AC;
    }
}

loc_807B8698:
{
    r4 = 0x80000000u;
    r0 = (r4 + -2);
}

loc_807B86A4:
{
    if ((static_cast<int32_t>(r31) > static_cast<int32_t>(r0))) {
        goto loc_807B86AC;
    }
}

loc_807B86A8:
{
    r5 = 1;
}

loc_807B86AC:
{
}

loc_807B86B0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_807B8734;
    }
}

loc_807B86B4:
{
    r0 = (r7 + 7);
    r6 = 255;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    r5 = 0x809C0000u;
    ctr = r0;
}

loc_807B86CC:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_807B8734;
    }
}

loc_807B86D0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 13928), 0, 4u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + 13928));
    r4_addr_2 = (r4 + r3);
    MemoryInline::FlatWrite8(r4_addr_2, static_cast<uint8_t>(r6));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + 13928));
    r4 = (r0 + r3);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r6));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + 13928));
    r4 = (r0 + r3);
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r6));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + 13928));
    r4 = (r0 + r3);
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r6));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + 13928));
    r4 = (r0 + r3);
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r6));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + 13928));
    r4 = (r0 + r3);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r6));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + 13928));
    r4 = (r0 + r3);
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r6));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + 13928));
    r4 = (r0 + r3);
    r3 = (r3 + 8);
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r6));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807B86D0;
    }
}

loc_807B8734:
{
    r0 = (r31 - r3);
    r6 = 255;
    r5 = 0x809C0000u;
    ctr = r0;
}

loc_807B8748:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r31))) {
        goto loc_807B875C;
    }
}

loc_807B874C:
{
    r4 = MemoryInline::FlatRead32((r5 + 13928));
    r4_addr_5 = (r4 + r3);
    MemoryInline::FlatWrite8(r4_addr_5, static_cast<uint8_t>(r6));
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807B874C;
    }
}

loc_807B875C:
{
    r27 = 0;
    r31 = 0x809C0000u;
    r28 = 0x809C0000u;
    goto loc_807B8860;
}

loc_807B876C:
{
    r3 = MemoryInline::FlatRead32((r31 + -10520));
    r4 = (r27 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80514D3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r7 = MemoryInline::FlatRead32(r3);
    r4 = (r1 + 36);
    r3 = MemoryInline::FlatRead32((r31 + -10520));
    r5 = -1;
    f0.d = MemoryInline::FlatReadFloat32((r7 + 8));
    r6 = 4;
    f1.d = MemoryInline::FlatReadFloat32((r7 + 4));
    f2.d = MemoryInline::FlatReadFloat32(r7);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    ctx->lr = 0x807B87A8u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80516808u>(ctx);
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r29 = r3;
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_807B885C;
    }
}

loc_807B87B4:
{
    r3 = MemoryInline::FlatRead32((r28 + 13928));
    r3_addr_2 = (r3 + r0);
    r4 = MemoryInline::FlatRead8(r3_addr_2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(255));
}

loc_807B87C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807B87CC;
    }
}

loc_807B87C4:
{
    r3_addr_3 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r27));
    goto loc_807B885C;
}

loc_807B87CC:
{
    r3 = MemoryInline::FlatRead32((r31 + -10520));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80514D3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead32(r3);
    r4 = (r29 & 65535);
    r3 = MemoryInline::FlatRead32((r31 + -10520));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80516768u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r31 + -10520));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r4 = MemoryInline::FlatRead8((r4 + 45));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80514B7Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r1 + 24);
    r4 = (r1 + 12);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r5);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    // inline leaf 0x8019ADE0 (10 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f0.d, f1.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f0.d, f0.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f3.d, f3.d));
    // end of inlined leaf 0x8019ADE0
    f31.d = f1.d;
    r3 = (r1 + 36);
    r4 = (r1 + 12);
    // inline leaf 0x8019ADE0 (10 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f0.d, f1.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f0.d, f0.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f3.d, f3.d));
    // end of inlined leaf 0x8019ADE0
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), PPC_PsToScalarInline(f31.d));
}

loc_807B884C:
{
    if (((cr & 0x80000000u) == 0)) {
        f0.d = PPC_PsToScalarInline(f0.d);
        f1.d = PPC_PsToScalarInline(f1.d);
        f2.d = PPC_PsToScalarInline(f2.d);
        f3.d = PPC_PsToScalarInline(f3.d);
        f31.d = PPC_PsToScalarInline(f31.d);
        goto loc_807B885C;
    }
}

loc_807B8850:
{
    r3 = MemoryInline::FlatRead32((r28 + 13928));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    r3_addr_4 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_4, static_cast<uint8_t>(r27));
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f31.d = PPC_PsToScalarInline(f31.d);
}

loc_807B885C:
{
    r27 = (r27 + 1);
}

loc_807B8860:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r30));
}

loc_807B8864:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807B876C;
    }
}

loc_807B8868:
{
    r0 = 8;
    r4 = (r1 + 48);
    r3 = 0;
    ctr = r0;
}

loc_807B8878:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r4, static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r4 + 1), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r4 + 2), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r4 + 3), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r4 + 4), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r4 + 5), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r4 + 6), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r4 + 7), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r4 + 8), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r4 + 9), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r4 + 10), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r4 + 11), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r4 + 12), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r4 + 13), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r4 + 14), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r4 + 15), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r4 + 16), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r4 + 17), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r4 + 18), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r4 + 19), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r4 + 20), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r4 + 21), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r4 + 22), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 23u, (r4 + 23), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 24u, (r4 + 24), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 25u, (r4 + 25), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 26u, (r4 + 26), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 27u, (r4 + 27), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 28u, (r4 + 28), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 29u, (r4 + 29), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 30u, (r4 + 30), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 31u, (r4 + 31), static_cast<uint8_t>(r3));
    r4 = (r4 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807B8878;
    }
}

loc_807B8900:
{
    r28 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r31 = (r1 + 48);
    r3 = 0;
    r29 = 1;
    MemoryInline::FlatWriteRam32((r28 + 13932), r0);
    r30 = 0x809C0000u;
}

loc_807B8920:
{
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r30 + -10520));
    r31_addr_2 = (r31 + r0);
    MemoryInline::FlatWrite8(r31_addr_2, static_cast<uint8_t>(r29));
    r4 = (r1 + 8);
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x805181F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    r31_addr_3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8(r31_addr_3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B8948:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807B895C;
    }
}

loc_807B894C:
{
    r4 = MemoryInline::FlatRead32((r28 + 13932));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r28 + 13932), r0);
    goto loc_807B8920;
}

loc_807B895C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 336);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 336));
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 356));
    ctx->lr = r0;
    r1 = (r1 + 352);
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807B860C func_807B860C preserves=false fpr_mask=0x80000000
