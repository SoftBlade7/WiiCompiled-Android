#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B9F6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_addze_src_0 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_ca_0 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801B9F6C;

loc_801B9F6C:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_3, 44u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r28 = 0x802A0000u;
    r30 = r3;
    r28 = (r28 + -10472);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0x80350000u;
    r5 = MemoryInline::FlatRead32(r30);
    r4 = (r4 + 2144);
    r29 = r3;
    r0 = MemoryInline::FlatRead32((r4 + 36));
    r3 = (r5 & 3);
}

loc_801B9FAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_801B9FBC;
    }
}

loc_801B9FB0:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r4 + 36), r3);
    MemoryInline::FlatWrite32((r13 + -24728), r0);
}

loc_801B9FBC:
{
    r0 = MemoryInline::FlatRead32(r30);
    r3 = 0x80000000u;
    r25 = MemoryInline::FlatRead32((r3 + 204));
    r26_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r26 = (r26_rot_0 & 1073741823);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(4));
}

loc_801B9FD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801BA03C;
    }
}

loc_801B9FD4:
{
    r0 = MemoryInline::FlatRead32((r13 + -24676));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B9FDC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801BA03C;
    }
}

loc_801B9FE0:
{
    r0 = 1;
    r3 = (r28 + 956);
    MemoryInline::FlatWrite32((r13 + -24676), r0);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x801B9FF4u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A25D0u>(ctx);
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r28 + 1000);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x801BA000u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A25D0u>(ctx);
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r28 + 1044);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x801BA00Cu;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A25D0u>(ctx);
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r28 + 1088);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x801BA018u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A25D0u>(ctx);
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r28 + 1132);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x801BA024u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A25D0u>(ctx);
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r28 + 1176);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x801BA030u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A25D0u>(ctx);
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r28 + 956);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x801BA03Cu;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A25D0u>(ctx);
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801BA03C:
{
}

loc_801BA040:
{
    if ((static_cast<uint32_t>(r25) == static_cast<uint32_t>(1))) {
        goto loc_801BA05C;
    }
}

loc_801BA044:
{
}

loc_801BA048:
{
    if ((static_cast<uint32_t>(r25) == static_cast<uint32_t>(5))) {
        goto loc_801BA05C;
    }
}

loc_801BA04C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
}

loc_801BA050:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801BA07C;
    }
}

loc_801BA054:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(5));
}

loc_801BA058:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801BA07C;
    }
}

loc_801BA05C:
{
}

loc_801BA060:
{
    if ((static_cast<uint32_t>(r25) == static_cast<uint32_t>(1))) {
        goto loc_801BA06C;
    }
}

loc_801BA064:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r25), static_cast<uint32_t>(5));
}

loc_801BA068:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801BA098;
    }
}

loc_801BA06C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
}

loc_801BA070:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801BA098;
    }
}

loc_801BA074:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(5));
}

loc_801BA078:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801BA098;
    }
}

loc_801BA07C:
{
    r6 = r25;
    r7 = r26;
    r5 = (r28 + 1220);
    r3 = (r13 + -28520);
    r4 = 2647;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x801BA098u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A2660u>(ctx);
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
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801BA098:
{
}

loc_801BA09C:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_801BA0A8;
    }
}

loc_801BA0A0:
{
}

loc_801BA0A4:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(2))) {
        goto loc_801BA0B8;
    }
}

loc_801BA0A8:
{
    r3 = 0x80350000u;
    r3 = (r3 + 2144);
    MemoryInline::FlatWriteRam32((r3 + 40), r25);
    goto loc_801BA0C4;
}

loc_801BA0B8:
{
    r3 = 0x80350000u;
    r3 = (r3 + 2144);
    MemoryInline::FlatWriteRam32((r3 + 40), r26);
}

loc_801BA0C4:
{
    r4 = 0x80350000u;
    r5 = MemoryInline::FlatRead16((r30 + 10));
    r3 = (r4 + 2144);
    r0 = MemoryInline::FlatRead32((r3 + 36));
    MemoryInline::FlatWriteRam16((r4 + 2144), static_cast<uint16_t>(r5));
}

loc_801BA0DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801BA0EC;
    }
}

loc_801BA0E0:
{
    r0 = MemoryInline::FlatRead16((r30 + 12));
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & 65534);
    goto loc_801BA0F0;
}

loc_801BA0EC:
{
    r8 = MemoryInline::FlatRead16((r30 + 12));
}

loc_801BA0F0:
{
    r7 = 0x80350000u;
    r6 = MemoryInline::FlatRead16((r30 + 14));
    r7 = (r7 + 2144);
    r4 = MemoryInline::FlatRead16((r30 + 4));
    r9 = MemoryInline::FlatRead32((r7 + 36));
    r0 = 0;
    r5 = MemoryInline::FlatRead16((r30 + 8));
    r3 = MemoryInline::FlatRead32((r30 + 20));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
}

loc_801BA114:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r7 + 2), 0, 34u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, (r7 + 2), r8);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r7 + 4), r6);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r7 + 18), r4);
        MemoryInline::WriteResolved16(guest_range_0, 18u, (r7 + 20), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 30u, (r7 + 32), r3);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_0, 24u, (r7 + 26), r4);
        MemoryInline::WriteResolved16(guest_range_0, 26u, (r7 + 28), r5);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 20u, (r7 + 22), r0);
        MemoryInline::WriteResolved16(guest_range_0, 22u, (r7 + 24), r0);
    }
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801BA140;
    }
}

loc_801BA13C:
{
    goto loc_801BA158;
}

loc_801BA140:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
}

loc_801BA144:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801BA14C;
    }
}

loc_801BA148:
{
    goto loc_801BA158;
}

loc_801BA14C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801BA150:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801BA158;
    }
}

loc_801BA154:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & 65534);
}

loc_801BA158:
{
    r31 = 0x80350000u;
    r28 = (r31 + 2144);
    r4 = MemoryInline::FlatRead32((r28 + 36));
    r0 = MemoryInline::FlatRead32((r28 + 40));
    r3 = (r4 + -3);
    MemoryInline::FlatWriteRam16((r28 + 6), static_cast<uint16_t>(r5));
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    MemoryInline::FlatWriteRam32((r28 + 68), r3);
    r3 = (r0 + r4);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801B917Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead16((r28 + 4));
    r30 = r3;
    r5 = MemoryInline::FlatRead16((r31 + 2144));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = MemoryInline::FlatRead16((r13 + -24732));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r8 = (720 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(720) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    MemoryInline::FlatWriteRam32((r28 + 84), r3);
    r4 = (r5 + r4);
}

loc_801BA1A8:
{
    r7 = MemoryInline::FlatRead16((r3 + 2));
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r8))) {
        goto loc_801BA1B4;
    }
}

loc_801BA1B0:
{
    goto loc_801BA1BC;
}

loc_801BA1B4:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 31);
    r8 = (r4 & ~r0);
}

loc_801BA1BC:
{
    r5 = 0x80350000u;
    r9 = MemoryInline::FlatRead16((r13 + -24730));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r5 = (r5 + 2144);
    r6 = MemoryInline::FlatRead16((r5 + 2));
    r4 = MemoryInline::FlatRead32((r5 + 32));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r6 = (r6 & 1);
    r10 = (r0 + r9);
    MemoryInline::FlatWriteRam16((r5 + 8), static_cast<uint16_t>(r8));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r4 = (r4_rot_0 & 134217727);
}

loc_801BA1EC:
{
    r0 = r6;
    r5 = (r4 + 1);
    if ((static_cast<int32_t>(r10) <= static_cast<int32_t>(r6))) {
        goto loc_801BA1FC;
    }
}

loc_801BA1F8:
{
    r0 = r10;
}

loc_801BA1FC:
{
    r4 = 0x80350000u;
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r4 = (r4 + 2144);
    r10 = MemoryInline::FlatRead16((r4 + 2));
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r8 = (r8_rot_3 & -2);
    r7 = MemoryInline::FlatRead16((r4 + 6));
    r31 = (r8 - r6);
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r10)));
    r11 = MemoryInline::FlatRead16((r4 + 2));
    r11 = (r11 << 16);
    r11 = (static_cast<int32_t>(r11) >> 16);
    r28 = (r9 + r8);
    r10 = MemoryInline::FlatRead16((r4 + 6));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r11 = (r11 + r9);
    r8 = (r8 + r28);
    r9 = (r10 + r28);
    r8 = (r8 - r31);
    r26 = (r11 - r6);
    r12 = (0 - r8);
    r25 = (r9 - r31);
    r27 = (r28 - r6);
    MemoryInline::FlatWriteRam16((r4 + 10), static_cast<uint16_t>(r0));
    r10 = (r12 & ~r8);
    r6 = (0 - r25);
    r28 = (static_cast<int32_t>(r10) >> 31);
    r9 = MemoryInline::FlatRead16((r4 + 28));
    r10 = (static_cast<int32_t>(r27) >> 31);
    r6 = (r6 & ~r25);
    r12 = (static_cast<int32_t>(r26) >> 31);
    r8 = (r8 & r28);
    r31 = (r27 & r10);
    r10 = (static_cast<int32_t>(r6) >> 31);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r27);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r6 = (static_cast<int32_t>(r27) >> 31);
    r12 = (r26 & r12);
    r6 = (r27 & r6);
    r7 = (r7 + r31);
    r0 = (r7 - r8);
    r10 = (r25 & r10);
    r6 = PPC_Divw(static_cast<int32_t>(r6), static_cast<int32_t>(r5));
    MemoryInline::FlatWriteRam16((r4 + 12), static_cast<uint16_t>(r0));
    r11 = MemoryInline::FlatRead16((r4 + 24));
    r7 = PPC_Divw(static_cast<int32_t>(r12), static_cast<int32_t>(r5));
    r0 = (r9 + r6);
    r5 = PPC_Divw(static_cast<int32_t>(r10), static_cast<int32_t>(r5));
    r6 = (r11 - r7);
    MemoryInline::FlatWriteRam16((r4 + 14), static_cast<uint16_t>(r6));
    r0 = (r0 - r5);
    MemoryInline::FlatWriteRam16((r4 + 16), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead16((r3 + 24));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0 = (r5 & 1);
    r0 = (r0 ^ r4);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r7 = (r7_rot_0 & 65535);
    r0 = (r0 - r4);
    r0 = (r0 & 65535);
}

loc_801BA2D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801BA2E0;
    }
}

loc_801BA2D8:
{
    r6 = MemoryInline::FlatRead16((r3 + 26));
    goto loc_801BA2E4;
}

loc_801BA2E0:
{
    r6 = 0;
}

loc_801BA2E4:
{
    r0 = MemoryInline::FlatRead32((r13 + -24720));
    r3 = 0x80350000u;
    r5 = MemoryInline::FlatRead32((r13 + -24716));
    r3 = (r3 + 2144);
    r4 = (r0 | 64);
    r0 = (r7 + 1);
    MemoryInline::FlatWrite32((r13 + -24716), r5);
    r7 = 0x80350000u;
    r9 = MemoryInline::FlatRead32((r3 + 36));
    r5 = (r0 & 65535);
    MemoryInline::FlatWrite32((r13 + -24720), r4);
    r8 = (r6 + 1);
    r0 = (r9 + -2);
    r6 = (r5 | 4096);
    r7 = (r7 + 2024);
    r4 = MemoryInline::FlatRead32((r13 + -24720));
    r5 = MemoryInline::FlatRead32((r13 + -24716));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801BA32C:
{
    r0 = (r4 | 128);
    MemoryInline::FlatWriteRam16((r7 + 50), static_cast<uint16_t>(r8));
    r4 = MemoryInline::FlatRead16((r7 + 2));
    MemoryInline::FlatWrite32((r13 + -24716), r5);
    r5 = MemoryInline::FlatRead16((r7 + 108));
    MemoryInline::FlatWriteRam16((r7 + 48), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite32((r13 + -24720), r0);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801BA374;
    }
}

loc_801BA34C:
{
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3 = (r4 & -5);
    r4 = (r3 | 4);
}

loc_801BA35C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_801BA368;
    }
}

loc_801BA360:
{
    r10 = (r5 & -2);
    goto loc_801BA380;
}

loc_801BA368:
{
    r0 = (r5 & -2);
    r10 = (r0 | 1);
    goto loc_801BA380;
}

loc_801BA374:
{
    r4 = (r4 & -5);
    r10 = (r5 & -2);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r4_mrot_1 = (r4_rot_2 & 4);
    r4_mdest_1 = (r4 & -5);
    r4 = (r4_mdest_1 | r4_mrot_1);
}

loc_801BA380:
{
    r3 = 0x80350000u;
    r4 = (r4 & -9);
    r3 = (r3 + 2144);
    r5 = MemoryInline::FlatRead32((r3 + 40));
    r8 = MemoryInline::FlatRead32((r3 + 68));
    r0 = (r5 + -1);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r3 = (r3_rot_1 & -8);
    r3 = (r4 | r3);
}

loc_801BA3A4:
{
    r7 = (r3 & -769);
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_801BA3B4;
    }
}

loc_801BA3AC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & -256);
    r7 = (r7 | r0);
}

loc_801BA3B4:
{
    r0 = MemoryInline::FlatRead32((r13 + -24720));
    r3 = 0x80350000u;
    r4 = MemoryInline::FlatRead32((r13 + -24716));
    r3 = (r3 + 2144);
    r0 = (r0 | 1073741824);
    r6 = 0x80350000u;
    MemoryInline::FlatWrite32((r13 + -24716), r4);
    r6 = (r6 + 2024);
    r4 = MemoryInline::FlatRead16((r3 + 26));
}

loc_801BA3DC:
{
    MemoryInline::FlatWrite32((r13 + -24720), r0);
    r5 = MemoryInline::FlatRead16((r3 + 4));
    r3 = MemoryInline::FlatRead32((r13 + -24720));
    r0 = MemoryInline::FlatRead32((r13 + -24716));
    MemoryInline::FlatWriteRam16((r6 + 2), static_cast<uint16_t>(r7));
    r0 = (r0 | 512);
    MemoryInline::FlatWrite32((r13 + -24716), r0);
    MemoryInline::FlatWriteRam16((r6 + 108), static_cast<uint16_t>(r10));
    MemoryInline::FlatWrite32((r13 + -24720), r3);
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801BA408;
    }
}

loc_801BA404:
{
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_4 & 131070);
}

loc_801BA408:
{
    r7 = (r4 & 65535);
}

loc_801BA410:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r5))) {
        goto loc_801BA464;
    }
}

loc_801BA414:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & 16776960);
    r3 = MemoryInline::FlatRead32((r13 + -24720));
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r13 + -24716));
    r6 = (r4 + -1);
    r6 = PPC_Divwu(static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
    r0 = (r0 | 67108864);
    MemoryInline::FlatWrite32((r13 + -24716), r0);
    r4 = 0x80350000u;
    MemoryInline::FlatWrite32((r13 + -24720), r3);
    r4 = (r4 + 2024);
    r3 = MemoryInline::FlatRead32((r13 + -24720));
    r6 = (r6 | 4096);
    r0 = MemoryInline::FlatRead32((r13 + -24716));
    MemoryInline::FlatWriteRam16((r4 + 74), static_cast<uint16_t>(r6));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32((r13 + -24716), r0);
    MemoryInline::FlatWriteRam16((r4 + 112), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite32((r13 + -24720), r3);
    goto loc_801BA488;
}

loc_801BA464:
{
    r3 = MemoryInline::FlatRead32((r13 + -24720));
    r4 = 0x80350000u;
    r0 = MemoryInline::FlatRead32((r13 + -24716));
    r4 = (r4 + 2024);
    r6 = 256;
    r0 = (r0 | 67108864);
    MemoryInline::FlatWriteRam16((r4 + 74), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite32((r13 + -24716), r0);
    MemoryInline::FlatWrite32((r13 + -24720), r3);
}

loc_801BA488:
{
    r31 = 0x80350000u;
    r3 = r30;
    r31 = (r31 + 2144);
    r4 = MemoryInline::FlatRead16((r31 + 8));
    // inline leaf 0x801B9CF8 (56 guest instruction(s))
}

loc_inl1_0x801B9CF8:
{
    r0 = MemoryInline::FlatRead32((r13 + -24720));
    r9 = 0x80350000u;
    r6 = 0x80350000u;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 26), 0, 8u, true, false);
    r10 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r3 + 26));
    r8 = MemoryInline::FlatRead32((r13 + -24716));
    r9 = (r9 + 2024);
    r7 = (r0 | 268435456);
    r6 = (r6 + 2144);
    MemoryInline::FlatWrite32((r13 + -24716), r8);
    r0 = MemoryInline::FlatRead32((r6 + 40));
    MemoryInline::FlatWriteRam16((r9 + 6), static_cast<uint16_t>(r10));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
}

loc_inl1_0x801B9D28:
{
    MemoryInline::FlatWrite32((r13 + -24720), r7);
    r0 = MemoryInline::FlatRead32((r13 + -24720));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r3 + 29));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r3 + 30));
    r0 = (r0 | 536870912);
    r6 = MemoryInline::FlatRead32((r13 + -24716));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r7_mrot_0 = (r7_rot_1 & 65280);
    r7_mdest_0 = (r7 & -65281);
    r7 = (r7_mdest_0 | r7_mrot_0);
    MemoryInline::FlatWriteRam16((r9 + 4), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite32((r13 + -24716), r6);
    MemoryInline::FlatWrite32((r13 + -24720), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_0x801B9D64;
    }
}

loc_inl1_0x801B9D54:
{
    r4 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 31));
    r10 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r3 + 32));
    r9 = (r4 + 172);
    goto loc_inl1_0x801B9D84;
}

loc_inl1_0x801B9D64:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r3 + 32));
    r6 = (720 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(720) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r7 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 31));
    r5 = (r4 + r0);
    r4 = (r4 + r7);
    r0 = (r5 + 40);
    r9 = (r4 + -40);
    r10 = (r0 - r6);
}

loc_inl1_0x801B9D84:
{
    r0 = MemoryInline::FlatRead32((r13 + -24720));
    r6 = 0x80350000u;
    r8 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r3 + 28));
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(7));
    r7 = (r7_rot_2 & 65408);
    r4 = MemoryInline::FlatRead32((r13 + -24716));
    r5 = (r0 | 67108864);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(23));
    r3 = (r3_rot_2 & 8388607);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    MemoryInline::FlatWrite32((r13 + -24716), r4);
    r4 = (r3 | r0);
    r6 = (r6 + 2024);
    r7 = (r8 | r7);
    MemoryInline::FlatWrite32((r13 + -24720), r5);
    r0 = MemoryInline::FlatRead32((r13 + -24720));
    r3 = MemoryInline::FlatRead32((r13 + -24716));
    r0 = (r0 | 134217728);
    MemoryInline::FlatWriteRam16((r6 + 10), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite32((r13 + -24716), r3);
    MemoryInline::FlatWriteRam16((r6 + 8), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite32((r13 + -24720), r0);
}

loc_inl1_cont_801B9CF8:
{
    // end of inlined leaf 0x801B9CF8
    guest_range_2 = MemoryInline::ResolveRangeHost((r30 + 12), 0, 12u, true, false);
    r4 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r30 + 16));
    r3 = 0x80350000u;
    r0 = MemoryInline::FlatRead32((r13 + -24720));
    r3 = (r3 + 2024);
    r7 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r30 + 12));
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
    r4 = (r4_rot_6 & -32);
    r6 = MemoryInline::FlatRead32((r13 + -24716));
    r5 = (r0 | 1048576);
    r7 = (r7 | r4);
    r4 = MemoryInline::FlatRead16((r31 + 18));
    MemoryInline::FlatWrite32((r13 + -24716), r6);
    r6 = MemoryInline::FlatRead32((r31 + 32));
    r0 = (r4 + 15);
    MemoryInline::FlatWrite32((r13 + -24720), r5);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r0) >> 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801BA4DC:
{
    r0 = MemoryInline::FlatRead16((r31 + 26));
    MemoryInline::FlatWriteRam16((r3 + 22), static_cast<uint16_t>(r7));
    r4_addze_src_0 = r4;
    r4_ca_0 = (xer >> 29) & 1u;
    r4 = (r4_addze_src_0 + r4_ca_0);
    r5 = MemoryInline::FlatRead32((r13 + -24720));
    r6 = MemoryInline::ReadResolved16(guest_range_2, 8u, (r30 + 20));
    r8 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r30 + 14));
    r5 = (r5 | 2097152);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(5));
    r7 = (r7_rot_3 & -32);
    r6 = MemoryInline::FlatRead32((r13 + -24716));
    r7 = (r8 | r7);
    r9 = MemoryInline::FlatRead16((r31 + 22));
    MemoryInline::FlatWrite32((r13 + -24716), r6);
    MemoryInline::FlatWrite32((r13 + -24720), r5);
    MemoryInline::FlatWriteRam16((r3 + 20), static_cast<uint16_t>(r7));
    r5 = MemoryInline::FlatRead32((r13 + -24720));
    r6 = MemoryInline::ReadResolved16(guest_range_2, 6u, (r30 + 18));
    r8 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r30 + 13));
    r5 = (r5 | 262144);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(5));
    r7 = (r7_rot_4 & -32);
    r6 = MemoryInline::FlatRead32((r13 + -24716));
    r7 = (r8 | r7);
    MemoryInline::FlatWrite32((r13 + -24716), r6);
    MemoryInline::FlatWrite32((r13 + -24720), r5);
    MemoryInline::FlatWriteRam16((r3 + 26), static_cast<uint16_t>(r7));
    r5 = MemoryInline::FlatRead32((r13 + -24720));
    r6 = MemoryInline::ReadResolved16(guest_range_2, 10u, (r30 + 22));
    r8 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r30 + 15));
    r5 = (r5 | 524288);
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(5));
    r7 = (r7_rot_5 & -32);
    r6 = MemoryInline::FlatRead32((r13 + -24716));
    r7 = (r8 | r7);
    MemoryInline::FlatWriteRam8((r31 + 44), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r13 + -24716), r6);
    MemoryInline::FlatWriteRam16((r3 + 24), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite32((r13 + -24720), r5);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801BA574;
    }
}

loc_801BA56C:
{
    r10 = (r4 & 255);
    goto loc_801BA578;
}

loc_801BA574:
{
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r10 = (r10_rot_1 & 254);
}

loc_801BA578:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(28));
    r3 = (r3_rot_3 & -268435456);
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r4 = (r4_rot_7 & 1);
    r3 = (r3 - r4);
    r5 = MemoryInline::FlatRead32((r13 + -24720));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r3 = (r3_rot_4 & -1);
    r6 = MemoryInline::FlatRead32((r13 + -24716));
    r9 = (r3 + r4);
    r4 = MemoryInline::FlatRead32((r13 + -24696));
    r7 = (r9 & 255);
    r3 = 0x80350000u;
    r8 = (r0 + r7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801BA5A8:
{
    r0 = (r8 + 15);
    r3 = (r3 + 2144);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r8 = (static_cast<int32_t>(r0) >> 4);
    r7 = 0x80350000u;
    r0 = (r6 | 134217728);
    MemoryInline::FlatWriteRam8((r3 + 45), static_cast<uint8_t>(r10));
    r6_ca_0 = (xer >> 29) & 1u;
    r6 = (r8 + r6_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r6_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r7 = (r7 + 2024);
    MemoryInline::FlatWrite32((r13 + -24716), r0);
    r0 = r10;
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r0_mrot_0 = (r0_rot_6 & 65280);
    r0_mdest_0 = (r0 & -65281);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWriteRam8((r3 + 60), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam8((r3 + 46), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam16((r7 + 72), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r13 + -24720), r5);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801BA5FC;
    }
}

loc_801BA5E8:
{
    r4 = (r3 + 52);
    r5 = (r3 + 56);
    r6 = (r3 + 76);
    r7 = (r3 + 80);
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
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801B9A40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_801BA5FC:
{
    r4 = 0x80350000u;
    r4 = (r4 + 2144);
    r0 = MemoryInline::FlatRead32((r4 + 64));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead16((r4 + 10));
    r4 = MemoryInline::FlatRead16((r4 + 12));
    r5 = MemoryInline::FlatRead8(r30);
    r6 = MemoryInline::FlatRead16((r30 + 2));
    r7 = MemoryInline::FlatRead16((r30 + 4));
    r8 = MemoryInline::FlatRead16((r30 + 6));
    r9 = MemoryInline::FlatRead16((r30 + 8));
    r10 = MemoryInline::FlatRead16((r30 + 10));
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801B9DD8u>(ctx);
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r11 = (r1 + 48);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r1 + 52));
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801B9F6C func_801B9F6C preserves=true fpr_mask=0x00000000
