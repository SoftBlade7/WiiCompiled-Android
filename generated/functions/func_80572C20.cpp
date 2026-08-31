#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80572C20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80572C20;

loc_80572C20:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 48);
    // inline leaf 0x80021594 (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021594
    r31 = 0x80890000u;
    r28 = r3;
    r31 = (r31 + 5936);
    r3 = (r3 + 4);
    // inline leaf 0x805903AC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // end of inlined leaf 0x805903AC
    r30 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r28 + 4);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r3 = (r28 + 4);
    // inline leaf 0x805914BC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = (r3 + 356);
    // end of inlined leaf 0x805914BC
    r3 = (r28 + 4);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r4 = MemoryInline::FlatRead32((r28 + 4));
    r29 = (r3 + 256);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 & 2176);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80572C88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80572C98;
    }
}

loc_80572C8C:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 134217728);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80572C94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80572CA4;
    }
}

loc_80572C98:
{
    r3 = (r28 + 4);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r29 = (r3 + 240);
}

loc_80572CA4:
{
    r5 = MemoryInline::FlatRead32((r28 + 4));
    r3 = (r28 + 4);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r25 = (r5 + 52);
    r24_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r24 = (r24_rot_0 & 1);
    // inline leaf 0x8059069C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x8059069C
    f31.d = MemoryInline::FlatReadFloat32((r3 + 156));
    r3 = (r28 + 4);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f30.d = MemoryInline::FlatReadFloat32((r3 + 368));
    r3 = (r28 + 4);
    // inline leaf 0x805914BC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = (r3 + 356);
    // end of inlined leaf 0x805914BC
    r26 = r3;
    r3 = (r28 + 4);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r27 = r3;
    r3 = (r28 + 4);
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    f1.d = f30.d;
    r0 = r3;
    f2.d = f31.d;
    r3 = r28;
    r5 = r27;
    r6 = r30;
    r7 = r29;
    r8 = r26;
    r9 = r24;
    r10 = r25;
    r4 = (r0 & 255);
    ctx->lr = 0x80572D24u;
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
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805B6724u>(ctx);
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
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r3 = (r0 & 66);
}

loc_80572D2C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80572D3C;
    }
}

loc_80572D30:
{
    r0 = MemoryInline::FlatRead32((r28 + 44));
    r0 = (r0 & 12);
}

loc_80572D38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80572E04;
    }
}

loc_80572D3C:
{
}

loc_80572D40:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80572DB4;
    }
}

loc_80572D44:
{
    r0 = MemoryInline::FlatRead32((r28 + 44));
    r0 = (r0 & 12);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80572D4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80572DFC;
    }
}

loc_80572D50:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 36), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 40), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 44), f0.d);
    r0 = MemoryInline::FlatRead32((r28 + 44));
    r0 = (r0 & 4);
}

loc_80572D88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80572D98;
    }
}

loc_80572D8C:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r30 + 8), r0);
}

loc_80572D98:
{
    r0 = MemoryInline::FlatRead32((r28 + 44));
    r0 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80572DA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80572DFC;
    }
}

loc_80572DA4:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32((r30 + 8), r0);
    goto loc_80572DFC;
}

loc_80572DB4:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 32));
    MemoryInline::FlatWriteFloat32((r30 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 36));
    MemoryInline::FlatWriteFloat32((r30 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 40));
    MemoryInline::FlatWriteFloat32((r30 + 44), f0.d);
    r0 = MemoryInline::FlatRead32((r28 + 44));
    r0 = (r0 & 4);
}

loc_80572DD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80572DE4;
    }
}

loc_80572DD8:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r30 + 8), r0);
}

loc_80572DE4:
{
    r0 = MemoryInline::FlatRead32((r28 + 44));
    r0 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80572DEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80572DFC;
    }
}

loc_80572DF0:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32((r30 + 8), r0);
}

loc_80572DFC:
{
    r3 = (r30 + 36);
    ctx->lr = 0x80572E04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
}

loc_80572E04:
{
    r3 = (r28 + 4);
    // inline leaf 0x805903AC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // end of inlined leaf 0x805903AC
    r3 = (r28 + 4);
    r29 = 0;
    // inline leaf 0x805914F4 (11 guest instruction(s))
}

loc_inl12_0x805914F4:
{
    r4 = MemoryInline::FlatRead32(r3);
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r4 + 40));
    r0 = MemoryInline::FlatRead16((r4 + 570));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl12_0x80591508:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_inl12_return;
    }
}

loc_inl12_0x8059150C:
{
    r0 = MemoryInline::FlatRead16((r4 + 568));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl12_0x80591514:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_inl12_return;
    }
}

loc_inl12_0x80591518:
{
    r3 = 0;
    goto loc_inl12_cont_805914F4;
}

loc_inl12_return:
{
}

loc_inl12_cont_805914F4:
{
    // end of inlined leaf 0x805914F4
}

loc_80572E1C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80572E5C;
    }
}

loc_80572E20:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & 1048576);
}

loc_80572E30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80572E5C;
    }
}

loc_80572E34:
{
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r3 & 1024);
}

loc_80572E3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80572E5C;
    }
}

loc_80572E40:
{
    r0 = (r3 & 4096);
}

loc_80572E44:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80572E5C;
    }
}

loc_80572E48:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & 2048);
}

loc_80572E50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80572E5C;
    }
}

loc_80572E54:
{
    r0 = (r3 & 512);
}

loc_80572E58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80572E60;
    }
}

loc_80572E5C:
{
    r29 = 1;
}

loc_80572E60:
{
}

loc_80572E64:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80572E70;
    }
}

loc_80572E68:
{
    f30.d = MemoryInline::FlatReadFloat32(r31);
    goto loc_80572E74;
}

loc_80572E70:
{
    f30.d = MemoryInline::FlatReadFloat32((r31 + 56));
}

loc_80572E74:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r24 = 0;
    r4 = 0;
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_80572E84:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80572EA0;
    }
}

loc_80572E88:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 32768);
}

loc_80572E98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80572EA0;
    }
}

loc_80572E9C:
{
    r4 = 1;
}

loc_80572EA0:
{
}

loc_80572EA4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80572EC4;
    }
}

loc_80572EA8:
{
    r3 = (r28 + 4);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f1.d = MemoryInline::FlatReadFloat32((r3 + 216));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 96));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80572EBC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80572EC4;
    }
}

loc_80572EC0:
{
    r24 = 1;
}

loc_80572EC4:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80572ED8:
{
    r25_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(10));
    r25 = (r25_rot_0 & 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80572EE8;
    }
}

loc_80572EE0:
{
    f31.d = MemoryInline::FlatReadFloat32((r31 + 44));
    goto loc_80572EEC;
}

loc_80572EE8:
{
    f31.d = MemoryInline::FlatReadFloat32((r31 + 52));
}

loc_80572EEC:
{
    r3 = (r28 + 4);
    // inline leaf 0x805903AC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // end of inlined leaf 0x805903AC
    r29 = r3;
    r3 = (r28 + 4);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f1.d = f31.d;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r25));
    f2.d = f30.d;
    r5 = MemoryInline::FlatRead32((r29 + 8));
    r4 = r3;
    r3 = r28;
    r6 = r24;
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r7 = (r7_rot_0 & 134217727);
    ctx->lr = 0x80572F24u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805B72B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 48);
    f30.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // inline leaf 0x800215E0 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E0
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFF81F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80572C20 func_80572C20 preserves=false fpr_mask=0xC0000000
