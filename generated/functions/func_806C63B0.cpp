#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806C63B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
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
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806C63B0;

loc_806C63B0:
{
    MemoryInline::FlatWriteRam32((r1 + -368), r1);
    r1 = (r1 + -368);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 372), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 352), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 360);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 336), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 344);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 320), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 320);
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
    r29 = 0x808A0000u;
    r30 = 0x802A0000u;
    r29 = (r29 + -1656);
    r26 = r3;
    f30.d = MemoryInline::FlatReadFloat32((r29 + 88));
    r31 = (r30 + 16640);
    f31.d = MemoryInline::FlatReadFloat32(r29);
    r27 = 0;
    r25 = 0;
    goto loc_806C6698;
}

loc_806C6404:
{
    r3 = MemoryInline::FlatRead32((r26 + 192));
    r4 = (r27 & 255);
    ctx->lr = 0x806C6410u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x806F47B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r6 = MemoryInline::FlatRead32(r3);
    r0 = (r27 + 1);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r4 = (r0 & 255);
    MemoryInline::FlatWriteRam32((r1 + 84), r5);
    MemoryInline::FlatWriteRam32((r1 + 80), r6);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    r3 = MemoryInline::FlatRead32((r26 + 192));
    ctx->lr = 0x806C6438u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x806F47B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r6 = MemoryInline::FlatRead32(r3);
    r4 = (r1 + 80);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r5 = (r1 + 68);
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    MemoryInline::FlatWriteRam32((r1 + 68), r6);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r1 + 56);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    r3 = (r1 + 56);
    ctx->lr = 0x806C6468u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r26 + 192));
    r4 = (r27 & 255);
    ctx->lr = 0x806C6474u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x806F4840u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
}

loc_806C6478:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806C64A4;
    }
}

loc_806C647C:
{
    r3 = (r27 & 255);
    r0 = (r27 & 1);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r0 ^ r3);
    r0 = (r0 - r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806C649C;
    }
}

loc_806C6494:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 76));
    goto loc_806C64C8;
}

loc_806C649C:
{
    f0.d = MemoryInline::FlatReadFloat32(r29);
    goto loc_806C64C8;
}

loc_806C64A4:
{
    r3 = (r27 & 255);
    r0 = (r27 & 1);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    r0 = (r0 ^ r3);
    r0 = (r0 - r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806C64C4;
    }
}

loc_806C64BC:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 80));
    goto loc_806C64C8;
}

loc_806C64C4:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 84));
}

loc_806C64C8:
{
    r4 = MemoryInline::FlatRead32((r26 + 184));
    r24_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r24 = (r24_rot_2 & 1020);
    r3 = (r1 + 44);
    r4_addr_2 = (r4 + r24);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f30.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r4 + 176), f0.d);
    r4 = MemoryInline::FlatRead32((r26 + 184));
    r4_addr_3 = (r4 + r24);
    r4 = MemoryInline::FlatRead32(r4_addr_3);
    // inline leaf 0x806C66D8 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r4 + 180));
    r0 = MemoryInline::FlatRead32((r4 + 184));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32(r3, r5);
    r0 = MemoryInline::FlatRead32((r4 + 188));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x806C66D8
    f1.d = MemoryInline::FlatReadFloat32((r29 + 64));
    r3 = (r1 + 32);
    r4 = (r1 + 44);
    r5 = (r1 + 56);
    ctx->lr = 0x806C650Cu;
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
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x806C66F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    r4 = MemoryInline::FlatRead32((r26 + 184));
    r3 = (r1 + 20);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r4_addr_4 = (r4 + r24);
    r4 = MemoryInline::FlatRead32(r4_addr_4);
    MemoryInline::FlatWriteFloat32((r4 + 180), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::FlatWriteFloat32((r4 + 184), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteFloat32((r4 + 188), f0.d);
    r4 = MemoryInline::FlatRead32((r26 + 184));
    r4_addr_5 = (r4 + r24);
    r4 = MemoryInline::FlatRead32(r4_addr_5);
    // inline leaf 0x806C66D8 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r4 + 180));
    r0 = MemoryInline::FlatRead32((r4 + 184));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32(r3, r5);
    r0 = MemoryInline::FlatRead32((r4 + 188));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x806C66D8
    r5 = MemoryInline::FlatRead32((r26 + 184));
    r3 = (r1 + 20);
    r4 = (r1 + 96);
    r5_addr_2 = (r5 + r24);
    r28 = MemoryInline::FlatRead32(r5_addr_2);
    f29.d = MemoryInline::FlatReadFloat32((r28 + 176));
    ctx->lr = 0x806C6554u;
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
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B3CA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 80));
    r3 = (r1 + 192);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 84));
    r4 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 88));
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f29.d);
    ctx->lr = 0x806C6584u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FF98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 16640));
    r3 = (r1 + 96);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r4 = (r1 + 192);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r5 = (r1 + 144);
    MemoryInline::FlatWriteRamFloat32((r1 + 204), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 220), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 236), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    r24 = MemoryInline::FlatRead32((r1 + 144));
    r27 = (r27 + 1);
    r12 = MemoryInline::FlatRead32((r1 + 148));
    r11 = MemoryInline::FlatRead32((r1 + 152));
    r10 = MemoryInline::FlatRead32((r1 + 156));
    r9 = MemoryInline::FlatRead32((r1 + 160));
    r8 = MemoryInline::FlatRead32((r1 + 164));
    r7 = MemoryInline::FlatRead32((r1 + 168));
    r6 = MemoryInline::FlatRead32((r1 + 172));
    r5 = MemoryInline::FlatRead32((r1 + 176));
    r4 = MemoryInline::FlatRead32((r1 + 180));
    r3 = MemoryInline::FlatRead32((r1 + 184));
    r0 = MemoryInline::FlatRead32((r1 + 188));
    MemoryInline::FlatWriteRam32((r1 + 240), r24);
    MemoryInline::FlatWriteRam32((r1 + 244), r12);
    MemoryInline::FlatWriteRam32((r1 + 248), r11);
    MemoryInline::FlatWriteRam32((r1 + 252), r10);
    MemoryInline::FlatWriteRam32((r1 + 256), r9);
    MemoryInline::FlatWriteRam32((r1 + 260), r8);
    MemoryInline::FlatWriteRam32((r1 + 264), r7);
    MemoryInline::FlatWriteRam32((r1 + 268), r6);
    MemoryInline::FlatWriteRam32((r1 + 272), r5);
    MemoryInline::FlatWriteRam32((r1 + 276), r4);
    MemoryInline::FlatWriteRam32((r1 + 280), r3);
    MemoryInline::FlatWriteRam32((r1 + 284), r0);
    r0 = MemoryInline::FlatRead16((r28 + 44));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite16((r28 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r28 + 84), static_cast<uint8_t>(r25));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 240));
    MemoryInline::FlatWriteFloat32((r28 + 88), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 244));
    MemoryInline::FlatWriteFloat32((r28 + 92), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 248));
    MemoryInline::FlatWriteFloat32((r28 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 252));
    MemoryInline::FlatWriteFloat32((r28 + 100), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 256));
    MemoryInline::FlatWriteFloat32((r28 + 104), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 260));
    MemoryInline::FlatWriteFloat32((r28 + 108), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 264));
    MemoryInline::FlatWriteFloat32((r28 + 112), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 268));
    MemoryInline::FlatWriteFloat32((r28 + 116), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 272));
    MemoryInline::FlatWriteFloat32((r28 + 120), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 276));
    MemoryInline::FlatWriteFloat32((r28 + 124), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 280));
    MemoryInline::FlatWriteFloat32((r28 + 128), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 284));
    MemoryInline::FlatWriteFloat32((r28 + 132), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 252));
    MemoryInline::FlatWriteFloat32((r28 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 268));
    MemoryInline::FlatWriteFloat32((r28 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 284));
    MemoryInline::FlatWriteFloat32((r28 + 56), f0.d);
}

loc_806C6698:
{
    r0 = MemoryInline::FlatRead8((r26 + 204));
    r3 = (r27 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_806C66A4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806C6404;
    }
}

loc_806C66A8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 352));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 336));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 320);
    f29.d = MemoryInline::FlatReadFloat64((r1 + 320));
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
    r0 = MemoryInline::FlatRead32((r1 + 372));
    ctx->lr = r0;
    r1 = (r1 + 368);
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF0017FE gpr_write=0xFF001FFB gpr_return=0x00000018 fpr_read=0xE000C01F fpr_write=0xE000FFFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806C63B0 func_806C63B0 preserves=false fpr_mask=0xE0000000
