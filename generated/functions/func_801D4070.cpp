#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D4070(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801D4070;

loc_801D4070:
{
    MemoryInline::FlatWriteRam32((r1 + -320), r1);
    r1 = (r1 + -320);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 324), r0);
    r11 = (r1 + 320);
    // inline leaf 0x80021584 (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021584
}

loc_801D4088:
{
    r21 = r3;
    r28 = r4;
    r22 = r5;
    r27 = r6;
    r26 = r7;
    r23 = r8;
    r25 = r9;
    r20 = r10;
    r24 = 0;
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(3))) {
        goto loc_801D40B8;
    }
}

loc_801D40B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801D40B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D40C8;
    }
}

loc_801D40B8:
{
    r3 = r21;
    r4 = 11;
    // inline leaf 0x801D2F8C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 2008), r4);
    // end of inlined leaf 0x801D2F8C
    goto loc_801D45D0;
}

loc_801D40C8:
{
    r3 = 596;
    r4 = 4;
    ctx->lr = 0x801D40D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801D2EECu>(ctx);
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
    r13 = ctx->gpr[13];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D40D8:
{
    r24 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D40F0;
    }
}

loc_801D40E0:
{
    r3 = r21;
    r4 = 1;
    // inline leaf 0x801D2F8C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 2008), r4);
    // end of inlined leaf 0x801D2F8C
    goto loc_801D45D0;
}

loc_801D40F0:
{
    r4 = 596;
    ctx->lr = 0x801D40F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D54F4u>(ctx);
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
    r3 = 1084;
    r4 = 4;
    ctx->lr = 0x801D4104u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801D2EECu>(ctx);
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
    r13 = ctx->gpr[13];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D4108:
{
    MemoryInline::FlatWriteRam32((r24 + 44), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D4120;
    }
}

loc_801D4110:
{
    r3 = r21;
    r4 = 1;
    // inline leaf 0x801D2F8C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 2008), r4);
    // end of inlined leaf 0x801D2F8C
    goto loc_801D45D0;
}

loc_801D4120:
{
    r4 = 1084;
    ctx->lr = 0x801D4128u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D54F4u>(ctx);
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
    r4 = MemoryInline::FlatRead32((r24 + 44));
    r3 = r28;
    MemoryInline::FlatWrite32((r4 + 40), r27);
    r4 = MemoryInline::FlatRead32((r24 + 44));
    MemoryInline::FlatWrite32((r4 + 28), r26);
    r4 = MemoryInline::FlatRead32((r24 + 44));
    MemoryInline::FlatWrite32((r4 + 44), r25);
    r4 = MemoryInline::FlatRead32((r24 + 44));
    MemoryInline::FlatWrite32((r4 + 48), r20);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D54ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(7));
}

loc_801D4154:
{
    r20 = r3;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801D416C;
    }
}

loc_801D415C:
{
    r3 = r21;
    r4 = 4;
    // inline leaf 0x801D2F8C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 2008), r4);
    // end of inlined leaf 0x801D2F8C
    goto loc_801D45D0;
}

loc_801D416C:
{
    r4 = r20;
    r3 = (r1 + 8);
    ctx->lr = 0x801D4178u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D54F4u>(ctx);
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
    r4 = r28;
    r5 = r20;
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D54E8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 80;
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r24 + 32), r0);
    r29 = 7;
    r4 = (r13 + -28400);
    r5 = 7;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801D5500u>(ctx);
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
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D41A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D41EC;
    }
}

loc_801D41AC:
{
    r4 = 0x802A0000u;
    r3 = (r1 + 8);
    r4 = (r4 + 5224);
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801D5500u>(ctx);
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
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801D41C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801D41D8;
    }
}

loc_801D41C8:
{
    r3 = r21;
    r4 = 4;
    // inline leaf 0x801D2F8C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 2008), r4);
    // end of inlined leaf 0x801D2F8C
    goto loc_801D45D0;
}

loc_801D41D8:
{
    r3 = 1;
    r0 = 443;
    MemoryInline::FlatWriteRam32((r24 + 8), r3);
    r29 = 8;
    MemoryInline::FlatWriteRam32((r24 + 32), r0);
}

loc_801D41EC:
{
    r28 = (r20 - r29);
    r25 = (r1 + 8);
    r25 = (r25 + r29);
    if ((static_cast<int32_t>(r28) > static_cast<int32_t>(0))) {
        goto loc_801D420C;
    }
}

loc_801D41FC:
{
    r3 = r21;
    r4 = 4;
    // inline leaf 0x801D2F8C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 2008), r4);
    // end of inlined leaf 0x801D2F8C
    goto loc_801D45D0;
}

loc_801D420C:
{
    r20 = r25;
    r26 = 0;
    r27 = 0;
    r30 = 0;
    goto loc_801D4290;
}

loc_801D4220:
{
}

loc_801D4224:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(2))) {
        goto loc_801D4230;
    }
}

loc_801D4228:
{
    r30 = (r30 + -1);
    goto loc_801D4288;
}

loc_801D4230:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(1));
}

loc_801D4234:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D4274;
    }
}

loc_801D4238:
{
    r3 = (r26 + r25);
    r4 = 2;
    r3 = (r3 + -1);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801D5750u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r30 = (r30 + -1);
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_801D4264;
    }
}

loc_801D4254:
{
    r3 = r21;
    r4 = 4;
    // inline leaf 0x801D2F8C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 2008), r4);
    // end of inlined leaf 0x801D2F8C
    goto loc_801D45D0;
}

loc_801D4264:
{
}

loc_801D4268:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(47))) {
        goto loc_801D4288;
    }
}

loc_801D426C:
{
    r27 = (r27 + -1);
    goto loc_801D42A4;
}

loc_801D4274:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_801D427C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(37))) {
        goto loc_801D4288;
    }
}

loc_801D4280:
{
    r30 = 2;
    r27 = (r27 + 1);
}

loc_801D4288:
{
    r26 = (r26 + 1);
    r20 = (r20 + 1);
}

loc_801D4290:
{
}

loc_801D4294:
{
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(r28))) {
        goto loc_801D42A4;
    }
}

loc_801D4298:
{
    r3 = MemoryInline::FlatRead8(r20);
}

loc_801D42A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(47))) {
        goto loc_801D4220;
    }
}

loc_801D42A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801D42A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D42BC;
    }
}

loc_801D42AC:
{
    r3 = r21;
    r4 = 4;
    // inline leaf 0x801D2F8C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 2008), r4);
    // end of inlined leaf 0x801D2F8C
    goto loc_801D45D0;
}

loc_801D42BC:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & -2);
    r0 = (r29 + r28);
    r3 = (r0 - r3);
    r4 = 4;
    r20 = (r3 + 1);
    r3 = r20;
    ctx->lr = 0x801D42D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801D2EECu>(ctx);
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
    r13 = ctx->gpr[13];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D42DC:
{
    MemoryInline::FlatWriteRam32((r24 + 36), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D42F4;
    }
}

loc_801D42E4:
{
    r3 = r21;
    r4 = 1;
    // inline leaf 0x801D2F8C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 2008), r4);
    // end of inlined leaf 0x801D2F8C
    goto loc_801D45D0;
}

loc_801D42F4:
{
    r4 = r20;
    ctx->lr = 0x801D42FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D54F4u>(ctx);
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
    r3 = MemoryInline::FlatRead32((r24 + 36));
    r5 = r29;
    r4 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D54E8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r20 = r25;
    r31 = 0;
    r27 = 0;
    r30 = 0;
    r26 = 0;
    goto loc_801D43C4;
}

loc_801D4324:
{
}

loc_801D4328:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(2))) {
        goto loc_801D4334;
    }
}

loc_801D432C:
{
    r30 = (r30 + -1);
    goto loc_801D43BC;
}

loc_801D4334:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(1));
}

loc_801D4338:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D4374;
    }
}

loc_801D433C:
{
    r3 = (r31 + r25);
    r4 = 2;
    r3 = (r3 + -1);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801D5750u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r24 + 36));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r27 + r29);
    r30 = (r30 + -1);
    r4 = (r4 + r0);
}

loc_801D4364:
{
    MemoryInline::FlatWrite8((r4 + -1), static_cast<uint8_t>(r3));
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(47))) {
        goto loc_801D43BC;
    }
}

loc_801D436C:
{
    r26 = 1;
    goto loc_801D43BC;
}

loc_801D4374:
{
    r5 = MemoryInline::FlatRead8(r20);
}

loc_801D437C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(47))) {
        goto loc_801D4384;
    }
}

loc_801D4380:
{
    r26 = 1;
}

loc_801D4384:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r4 = PPC_CntlzwInline(static_cast<uint32_t>(r26));
    r0 = (r3 + -37);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r3 = (r3_rot_3 & 134217727);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801D43AC;
    }
}

loc_801D43A4:
{
    r30 = 2;
    goto loc_801D43B8;
}

loc_801D43AC:
{
    r3 = MemoryInline::FlatRead32((r24 + 36));
    r0 = (r27 + r29);
    r3_addr_2 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_2, static_cast<uint8_t>(r5));
}

loc_801D43B8:
{
    r27 = (r27 + 1);
}

loc_801D43BC:
{
    r31 = (r31 + 1);
    r20 = (r20 + 1);
}

loc_801D43C4:
{
}

loc_801D43C8:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r28))) {
        goto loc_801D4324;
    }
}

loc_801D43CC:
{
    r3 = MemoryInline::FlatRead32((r24 + 36));
    r0 = (r29 + r27);
    r4 = 0;
    r5 = 0;
    r3_addr_5 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_5, static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead32((r24 + 36));
    r4 = (r0 + r29);
    r3 = r4;
    ctr = r27;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_801D43F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801D4428;
    }
}

loc_801D43F8:
{
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(47));
}

loc_801D4404:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D4410;
    }
}

loc_801D4408:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(58));
}

loc_801D440C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D441C;
    }
}

loc_801D4410:
{
    r0 = (r5 + r29);
    MemoryInline::FlatWriteRam32((r24 + 20), r0);
    goto loc_801D4428;
}

loc_801D441C:
{
    r5 = (r5 + 1);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D43F8;
    }
}

loc_801D4428:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(r27));
}

loc_801D442C:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_801D4440;
    }
}

loc_801D4430:
{
    r0 = (r5 + r29);
    MemoryInline::FlatWriteRam32((r24 + 20), r0);
    MemoryInline::FlatWriteRam32((r24 + 24), r0);
    goto loc_801D4500;
}

loc_801D4440:
{
    r4_addr_1 = (r4 + r5);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(47));
}

loc_801D444C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D445C;
    }
}

loc_801D4450:
{
    r0 = MemoryInline::FlatRead32((r24 + 20));
    MemoryInline::FlatWriteRam32((r24 + 24), r0);
    goto loc_801D4500;
}

loc_801D445C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(58));
}

loc_801D4460:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D4500;
    }
}

loc_801D4464:
{
    r0 = (r27 - r5);
    r3 = (r4 + r5);
    ctr = r0;
    if (((cr & 0x08000000u) == 0)) {
        goto loc_801D4498;
    }
}

loc_801D4474:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_801D447C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(47))) {
        goto loc_801D448C;
    }
}

loc_801D4480:
{
    r0 = (r5 + r29);
    MemoryInline::FlatWriteRam32((r24 + 24), r0);
    goto loc_801D4498;
}

loc_801D448C:
{
    r5 = (r5 + 1);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D4474;
    }
}

loc_801D4498:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r27));
}

loc_801D449C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D44AC;
    }
}

loc_801D44A0:
{
    r0 = (r5 + r29);
    MemoryInline::FlatWriteRam32((r24 + 24), r0);
    goto loc_801D4500;
}

loc_801D44AC:
{
    r4 = MemoryInline::FlatRead32((r24 + 20));
    r3 = MemoryInline::FlatRead32((r24 + 36));
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r24 + 24));
    r3 = (r3 + r4);
    r4 = (r0 - r4);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801D5B44u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D44CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D44D8;
    }
}

loc_801D44D0:
{
    r3 = MemoryInline::FlatRead32((r24 + 32));
    goto loc_801D44F8;
}

loc_801D44D8:
{
    r4 = 65536;
    r0 = (r4 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_801D44E4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801D44F8;
    }
}

loc_801D44E8:
{
    r3 = r21;
    r4 = 4;
    // inline leaf 0x801D2F8C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 2008), r4);
    // end of inlined leaf 0x801D2F8C
    goto loc_801D45D0;
}

loc_801D44F8:
{
    r0 = (r3 & 65535);
    MemoryInline::FlatWriteRam32((r24 + 32), r0);
}

loc_801D4500:
{
    r5 = MemoryInline::FlatRead32((r24 + 8));
    r4 = 4;
    r0 = MemoryInline::FlatRead32((r24 + 20));
    r3 = (0 - r5);
    r3 = (r3 | r5);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    r3 = (r3 + 7);
    r20 = (r0 - r3);
    r3 = (r20 + 1);
    ctx->lr = 0x801D4528u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801D2EECu>(ctx);
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
    r13 = ctx->gpr[13];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D452C:
{
    MemoryInline::FlatWriteRam32((r24 + 40), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D4544;
    }
}

loc_801D4534:
{
    r3 = r21;
    r4 = 1;
    // inline leaf 0x801D2F8C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 2008), r4);
    // end of inlined leaf 0x801D2F8C
    goto loc_801D45D0;
}

loc_801D4544:
{
    r4 = (r20 + 1);
    ctx->lr = 0x801D454Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D54F4u>(ctx);
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
    r4 = MemoryInline::FlatRead32((r24 + 8));
    r5 = r20;
    r6 = MemoryInline::FlatRead32((r24 + 36));
    r0 = (0 - r4);
    r3 = MemoryInline::FlatRead32((r24 + 40));
    r0 = (r0 | r4);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r0 = (r4 + 7);
    r4 = (r6 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D54E8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x80250000u;
    r3 = (r24 + 56);
    r4 = (r4 + 12208);
    r5 = 20;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D54E8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    guest_range_2 = MemoryInline::ResolveRangeHost((r24 + 12), 0, 572u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r24 + 28), r22);
    r0 = 0;
    r3 = r24;
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 160u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 160u, (r24 + 172), r0);
        MemoryInline::WriteResolved32(guest_range_2, 164u, (r24 + 176), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 168u, (r24 + 180), r0);
        MemoryInline::WriteResolved32(guest_range_2, 172u, (r24 + 184), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 176u, (r24 + 188), r0);
        MemoryInline::WriteResolved32(guest_range_2, 180u, (r24 + 192), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 184u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 184u, (r24 + 196), r0);
        MemoryInline::WriteResolved32(guest_range_2, 188u, (r24 + 200), r0);
    }
    MemoryInline::WriteResolved32(guest_range_2, 192u, (r24 + 204), r0);
    MemoryInline::WriteResolved32(guest_range_2, 200u, (r24 + 212), r0);
    r4 = MemoryInline::FlatRead32((r24 + 44));
    MemoryInline::FlatWrite32((r4 + 1080), r23);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r24 + 12), r0);
    MemoryInline::WriteResolved32(guest_range_2, 568u, (r24 + 580), r0);
    goto loc_801D4614;
}

loc_801D45D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_801D45D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D4610;
    }
}

loc_801D45D8:
{
    r3 = MemoryInline::FlatRead32((r24 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D45E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D45E8;
    }
}

loc_801D45E4:
{
    ctx->lr = 0x801D45E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801D2F48u>(ctx);
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
    r13 = ctx->gpr[13];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801D45E8:
{
    r3 = MemoryInline::FlatRead32((r24 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D45F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D45F8;
    }
}

loc_801D45F4:
{
    ctx->lr = 0x801D45F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801D2F48u>(ctx);
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
    r13 = ctx->gpr[13];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801D45F8:
{
    r3 = MemoryInline::FlatRead32((r24 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D4600:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D4608;
    }
}

loc_801D4604:
{
    ctx->lr = 0x801D4608u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801D2F48u>(ctx);
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
    r13 = ctx->gpr[13];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801D4608:
{
    r3 = r24;
    ctx->lr = 0x801D4610u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801D2F48u>(ctx);
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
    r13 = ctx->gpr[13];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801D4610:
{
    r3 = 0;
}

loc_801D4614:
{
    r11 = (r1 + 320);
    // inline leaf 0x800215D0 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D0
    r0 = MemoryInline::FlatRead32((r1 + 324));
    ctx->lr = r0;
    r1 = (r1 + 320);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801D4070 func_801D4070 preserves=true fpr_mask=0x00000000
