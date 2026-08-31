#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F4DE8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806F4DE8;

loc_806F4DE8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -176), 0, 184u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 180u, (r1 + 180), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 160u, (r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 160);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 148u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 148u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 152u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 156u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r4 = 0x808A0000u;
    r30 = 0x808C0000u;
    f31.d = MemoryInline::FlatReadFloat32((r4 + 2912));
    r25 = r3;
    r30 = (r30 + 30632);
    r26 = 0;
    r31 = 0x809C0000u;
}

loc_806F4E20:
{
    r28 = 0;
    r27 = 0;
    goto loc_806F500C;
}

loc_806F4E2C:
{
    r3 = MemoryInline::FlatRead32((r25 + 12));
    r3_addr_3 = (r3 + r27);
    r29 = MemoryInline::FlatRead32(r3_addr_3);
    r7 = MemoryInline::FlatRead32(r29);
}

loc_806F4E3C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_806F5004;
    }
}

loc_806F4E40:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806F4E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F4EE4;
    }
}

loc_806F4E4C:
{
    r6 = MemoryInline::FlatRead32((r7 + 16));
    r3 = (r1 + 104);
    r0 = MemoryInline::FlatRead32((r7 + 20));
    r4 = (r1 + 92);
    MemoryInline::FlatWriteRam32((r1 + 96), r0);
    r5 = (r29 + 16);
    MemoryInline::FlatWriteRam32((r1 + 92), r6);
    r0 = MemoryInline::FlatRead32((r7 + 24));
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
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
    r3 = (r1 + 104);
    ctx->lr = 0x806F4E7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r29);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806F4E88:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806F4ED8;
    }
}

loc_806F4E8C:
{
    r0 = MemoryInline::FlatRead8((r29 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806F4E94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F4ED8;
    }
}

loc_806F4E98:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8896));
    r3 = (r1 + 116);
    r4 = (r1 + 104);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::FlatReadFloat32((r29 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 64), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 68), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 72), f0.d);
}

loc_806F4ED8:
{
    r3 = r29;
    ctx->lr = 0x806F4EE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x806F2074u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    goto loc_806F5004;
}

loc_806F4EE4:
{
    r6 = MemoryInline::FlatRead32((r7 + 16));
    r3 = (r1 + 68);
    r0 = MemoryInline::FlatRead32((r7 + 20));
    r4 = (r1 + 56);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    r5 = (r29 + 16);
    MemoryInline::FlatWriteRam32((r1 + 56), r6);
    r0 = MemoryInline::FlatRead32((r7 + 24));
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
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
    r3 = (r1 + 68);
    ctx->lr = 0x806F4F14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r29);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806F4F20:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806F4F70;
    }
}

loc_806F4F24:
{
    r0 = MemoryInline::FlatRead8((r29 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806F4F2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F4F70;
    }
}

loc_806F4F30:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8896));
    r3 = (r1 + 80);
    r4 = (r1 + 68);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::FlatReadFloat32((r29 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 80));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 64), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 68), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 88));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 72), f0.d);
}

loc_806F4F70:
{
    r7 = MemoryInline::FlatRead32((r29 + 4));
    r3 = (r1 + 32);
    r4 = (r1 + 20);
    r5 = (r29 + 16);
    r6 = MemoryInline::FlatRead32((r7 + 16));
    r0 = MemoryInline::FlatRead32((r7 + 20));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    r0 = MemoryInline::FlatRead32((r7 + 24));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
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
    r3 = (r1 + 32);
    ctx->lr = 0x806F4FA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806F4FAC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806F4FFC;
    }
}

loc_806F4FB0:
{
    r0 = MemoryInline::FlatRead8((r29 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806F4FB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F4FFC;
    }
}

loc_806F4FBC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8896));
    r3 = (r1 + 44);
    r4 = (r1 + 32);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::FlatReadFloat32((r29 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 64), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 68), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 72), f0.d);
}

loc_806F4FFC:
{
    r3 = r29;
    ctx->lr = 0x806F5004u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x806F2074u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
}

loc_806F5004:
{
    r27 = (r27 + 4);
    r28 = (r28 + 1);
}

loc_806F500C:
{
    r0 = MemoryInline::FlatRead8((r25 + 16));
}

loc_806F5014:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r0))) {
        goto loc_806F4E2C;
    }
}

loc_806F5018:
{
    r28 = 0;
    r29 = 0;
    goto loc_806F50C0;
}

loc_806F5024:
{
    r4 = MemoryInline::FlatRead32((r25 + 12));
    r3 = (r1 + 8);
    r4_addr_3 = (r4 + r29);
    r27 = MemoryInline::FlatRead32(r4_addr_3);
    r4 = (r27 + 64);
    r5 = (r27 + 104);
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
    f1.d = MemoryInline::FlatReadFloat32((r27 + 40));
    r29 = (r29 + 4);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r28 = (r28 + 1);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r27 + 40), f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r27 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r27 + 44), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r27 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r27 + 48), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteFloat32((r27 + 40), f3.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r27 + 44), f2.d);
    MemoryInline::FlatWriteFloat32((r27 + 48), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    MemoryInline::FlatWriteFloat32((r27 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r27 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r27 + 24), f0.d);
    MemoryInline::FlatWriteFloat32((r27 + 72), f31.d);
    MemoryInline::FlatWriteFloat32((r27 + 68), f31.d);
    MemoryInline::FlatWriteFloat32((r27 + 64), f31.d);
}

loc_806F50C0:
{
    r4 = MemoryInline::FlatRead8((r25 + 16));
}

loc_806F50C8:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r4))) {
        goto loc_806F5024;
    }
}

loc_806F50CC:
{
    r26 = (r26 + 1);
}

loc_806F50D4:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(2))) {
        goto loc_806F4E20;
    }
}

loc_806F50D8:
{
    r0 = (r4 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_806F50DC:
{
    r3 = 0x808A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 44));
    r4 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 2912));
    r5 = 0;
    ctr = r0;
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_806F5168;
    }
}

loc_806F50F8:
{
    r0 = MemoryInline::FlatRead32((r25 + 12));
    r3 = (r0 + r5);
    r5_addr_2 = (r5 + r0);
    r6 = MemoryInline::FlatRead32(r5_addr_2);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    f5.d = MemoryInline::FlatReadFloat32((r6 + 16));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f3.d = MemoryInline::FlatReadFloat32((r6 + 20));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f5.d = MemoryInline::FlatReadFloat32((r6 + 24));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f4.d = PpcFmulsInline(f4.d, f4.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f1.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f3.d = PpcFmulsInline(f6.d, f6.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f5.d = PpcFmulsInline(f5.d, f5.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806F5154:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806F5160;
    }
}

loc_806F5158:
{
    r4 = 1;
    goto loc_806F5168;
}

loc_806F5160:
{
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806F50F8;
    }
}

loc_806F5168:
{
}

loc_806F516C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_806F51B0;
    }
}

loc_806F5170:
{
    f31.d = MemoryInline::FlatReadFloat32((r30 + 44));
    r26 = 0;
    r27 = 0;
    goto loc_806F51A4;
}

loc_806F5180:
{
    r3 = MemoryInline::FlatRead32((r25 + 12));
    r3_addr_5 = (r3 + r27);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806F5190:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F519C;
    }
}

loc_806F5194:
{
    f1.d = f31.d;
    ctx->lr = 0x806F519Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x806F2490u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
}

loc_806F519C:
{
    r27 = (r27 + 4);
    r26 = (r26 + 1);
}

loc_806F51A4:
{
    r0 = MemoryInline::FlatRead8((r25 + 16));
}

loc_806F51AC:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r0))) {
        goto loc_806F5180;
    }
}

loc_806F51B0:
{
    r4 = 1;
    r5 = 4;
    goto loc_806F5224;
}

loc_806F51BC:
{
    r3 = MemoryInline::FlatRead32((r25 + 12));
    r4 = (r4 + 1);
    r3_addr_8 = (r3 + r5);
    r3 = MemoryInline::FlatRead32(r3_addr_8);
    r5 = (r5 + 4);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 60));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 60));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
}

loc_806F5224:
{
    r0 = MemoryInline::FlatRead8((r25 + 16));
}

loc_806F522C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_806F51BC;
    }
}

loc_806F5230:
{
    f31.d = MemoryInline::FlatReadFloat32((r30 + 44));
    r26 = 0;
    r27 = 0;
    goto loc_806F5264;
}

loc_806F5240:
{
    r3 = MemoryInline::FlatRead32((r25 + 12));
    r3_addr_10 = (r3 + r27);
    r3 = MemoryInline::FlatRead32(r3_addr_10);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806F5250:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F525C;
    }
}

loc_806F5254:
{
    f1.d = f31.d;
    ctx->lr = 0x806F525Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x806F2490u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
}

loc_806F525C:
{
    r27 = (r27 + 4);
    r26 = (r26 + 1);
}

loc_806F5264:
{
    r0 = MemoryInline::FlatRead8((r25 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(r0));
}

loc_806F526C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806F5240;
    }
}

loc_806F5270:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 160);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 132), 0, 52u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 28u, (r1 + 160));
    // inline leaf 0x800215E4 (8 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE0000FF gpr_write=0xFE0008FB gpr_return=0x00000018 fpr_read=0xC00000FF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x806F4DE8 func_806F4DE8 preserves=false fpr_mask=0x80000000
