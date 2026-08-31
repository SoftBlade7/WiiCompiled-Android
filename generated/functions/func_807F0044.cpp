#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_805CD94C_statefree(uint32_t);

extern "C" void func_807F0044(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807F0044;

loc_807F0044:
{
    MemoryInline::FlatWriteRam32((r1 + -336), r1);
    r1 = (r1 + -336);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 340), r0);
    r11 = (r1 + 336);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r0 = MemoryInline::FlatRead32((r3 + 376));
    r31 = 0x808B0000u;
    r29 = r3;
    r30 = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_807F006C:
{
    r31 = (r31 + -25288);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F06D0;
    }
}

loc_807F0074:
{
    MemoryInline::FlatWrite32((r3 + 376), r4);
    r5 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = MemoryInline::FlatRead32((r5 + 2960));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F0088:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F00E4;
    }
}

loc_807F008C:
{
    r0 = (r4 * 240);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 244));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F009C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F00AC;
    }
}

loc_807F00A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807F00A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F00C8;
    }
}

loc_807F00A8:
{
    goto loc_807F00FC;
}

loc_807F00AC:
{
    r4 = 1;
    r3 = (r3 + 152);
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r4 = 0;
    ctx->lr = 0x807F00C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063C91Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807F00FC;
}

loc_807F00C8:
{
    r4 = 1;
    r3 = (r3 + 152);
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r4 = 1;
    ctx->lr = 0x807F00E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063C91Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807F00FC;
}

loc_807F00E4:
{
    r4 = 1;
    r3 = (r3 + 152);
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r4 = 2;
    ctx->lr = 0x807F00FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063C91Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807F00FC:
{
    r3 = 0x809C0000u;
    r4 = (r31 + 220);
    r7 = MemoryInline::FlatRead32((r3 + -10456));
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 188), 0, 33u, true, false);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 32u, (r31 + 220));
    r0 = MemoryInline::FlatRead32((r7 + 2960));
    r5 = MemoryInline::FlatRead8((r4 + 1));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F0118:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 45), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 46), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 47), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F01C4;
    }
}

loc_807F0134:
{
    r0 = (r30 * 240);
    r3 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 244));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F0144:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F0154;
    }
}

loc_807F0148:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807F014C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F018C;
    }
}

loc_807F0150:
{
    goto loc_807F042C;
}

loc_807F0154:
{
    r4 = (r31 + 188);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r31 + 188));
    r5 = MemoryInline::FlatRead8((r4 + 1));
    r3 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 40), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r1 + 40), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r1 + 41), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r1 + 42), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r1 + 43), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r1 + 44), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r1 + 45), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r1 + 46), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r1 + 47), static_cast<uint8_t>(r0));
    goto loc_807F042C;
}

loc_807F018C:
{
    r4 = (r31 + 192);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r31 + 192));
    r5 = MemoryInline::FlatRead8((r4 + 1));
    r3 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 36), 0, 12u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r1 + 36), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r1 + 37), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r1 + 38), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r1 + 39), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r1 + 44), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r1 + 45), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 10u, (r1 + 46), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_2, 11u, (r1 + 47), static_cast<uint8_t>(r0));
    goto loc_807F042C;
}

loc_807F01C4:
{
    r0 = MemoryInline::FlatRead32((r7 + 2928));
    r3 = 0;
}

loc_807F01D0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_807F01E0;
    }
}

loc_807F01D4:
{
}

loc_807F01D8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_807F01E0;
    }
}

loc_807F01DC:
{
    r3 = 1;
}

loc_807F01E0:
{
}

loc_807F01E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807F0344;
    }
}

loc_807F01E8:
{
    r3 = 0x809C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 908));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F0204:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F022C;
    }
}

loc_807F0208:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807F020C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F0264;
    }
}

loc_807F0210:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_807F0214:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F029C;
    }
}

loc_807F0218:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_807F021C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F02D4;
    }
}

loc_807F0220:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_807F0224:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F030C;
    }
}

loc_807F0228:
{
    goto loc_807F042C;
}

loc_807F022C:
{
    r4 = (r31 + 196);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r31 + 196));
    r5 = MemoryInline::FlatRead8((r4 + 1));
    r3 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 16u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r1 + 32), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r1 + 33), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r1 + 34), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r1 + 35), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 12u, (r1 + 44), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 13u, (r1 + 45), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 14u, (r1 + 46), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 15u, (r1 + 47), static_cast<uint8_t>(r0));
    goto loc_807F042C;
}

loc_807F0264:
{
    r4 = (r31 + 200);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r31 + 200));
    r5 = MemoryInline::FlatRead8((r4 + 1));
    r3 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 28), 0, 20u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r1 + 28), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r1 + 29), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r1 + 30), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r1 + 31), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 16u, (r1 + 44), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 17u, (r1 + 45), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 18u, (r1 + 46), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_4, 19u, (r1 + 47), static_cast<uint8_t>(r0));
    goto loc_807F042C;
}

loc_807F029C:
{
    r4 = (r31 + 204);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r31 + 204));
    r5 = MemoryInline::FlatRead8((r4 + 1));
    r3 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 0u, (r1 + 24), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 1u, (r1 + 25), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_5, 2u, (r1 + 26), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_5, 3u, (r1 + 27), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_5, 20u, (r1 + 44), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 21u, (r1 + 45), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_5, 22u, (r1 + 46), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_5, 23u, (r1 + 47), static_cast<uint8_t>(r0));
    goto loc_807F042C;
}

loc_807F02D4:
{
    r4 = (r31 + 208);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r31 + 208));
    r5 = MemoryInline::FlatRead8((r4 + 1));
    r3 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 28u, false, true);
    MemoryInline::WriteResolved8(guest_range_6, 0u, (r1 + 20), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_6, 1u, (r1 + 21), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_6, 2u, (r1 + 22), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_6, 3u, (r1 + 23), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_6, 24u, (r1 + 44), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_6, 25u, (r1 + 45), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_6, 26u, (r1 + 46), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_6, 27u, (r1 + 47), static_cast<uint8_t>(r0));
    goto loc_807F042C;
}

loc_807F030C:
{
    r4 = (r31 + 212);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r31 + 212));
    r5 = MemoryInline::FlatRead8((r4 + 1));
    r3 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    guest_range_7 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_7, 0u, (r1 + 16), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_7, 1u, (r1 + 17), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_7, 2u, (r1 + 18), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_7, 3u, (r1 + 19), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_7, 28u, (r1 + 44), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_7, 29u, (r1 + 45), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_7, 30u, (r1 + 46), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_7, 31u, (r1 + 47), static_cast<uint8_t>(r0));
    goto loc_807F042C;
}

loc_807F0344:
{
    r0 = (r30 * 240);
    r3 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F0354:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F042C;
    }
}

loc_807F0358:
{
    r3 = r30;
    r4 = (r1 + 56);
    r5 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x805F0440u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead16((r1 + 56));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r6 = 1127219200;
    r0 = MemoryInline::FlatRead16((r1 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r8 = (r31 + 216);
    r5 = MemoryInline::FlatRead16((r1 + 58));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (r3 + r0);
    r4 = MemoryInline::FlatRead16((r1 + 50));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r7 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 268), r7);
    r4 = (r5 + r4);
    f4.d = MemoryInline::FlatReadFloat64((r31 + 232));
    MemoryInline::FlatWriteRam32((r1 + 264), r6);
    r4 = (r4 ^ -2147483648);
    r5 = MemoryInline::FlatRead8((r8 + 3));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 264));
    MemoryInline::FlatWriteRam32((r1 + 284), r4);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 224));
    MemoryInline::FlatWriteRam32((r1 + 280), r6);
    r3 = MemoryInline::FlatRead16((r1 + 60));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r1 + 52));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 280));
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam32((r1 + 296), r6);
    r0 = (r0 ^ -2147483648);
    f2.d = PPC_Fctiwz(f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 300), r0);
    fctiwzword0 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 272), f2.d);
    f1.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 296));
    r4 = fctiwzword0;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r5));
    f1.d = PPC_Fctiwz(f1.d);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r4));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 288), f1.d);
    r3 = fctiwzword1;
    f0.d = PPC_Fctiwz(f0.d);
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r3));
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 304), f0.d);
    r0 = fctiwzword2;
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 45), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 46), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 47), static_cast<uint8_t>(r5));
}

loc_807F042C:
{
    r28 = MemoryInline::FlatRead32((r1 + 44));
    r27 = 0;
}

loc_807F0434:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r28);
    r4 = r27;
    r5 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r29 + 388));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x807F0454u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(4));
}

loc_807F045C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807F0434;
    }
}

loc_807F0460:
{
    r3 = 0x809C0000u;
    r31 = (r30 * 240);
    r0 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = (r0 + r31);
    r0 = MemoryInline::FlatRead32((r3 + 56));
}

loc_807F0478:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(3))) {
        goto loc_807F0484;
    }
}

loc_807F047C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_807F0480:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807F048C;
    }
}

loc_807F0484:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F0488:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F0680;
    }
}

loc_807F048C:
{
    r28 = 0x808B0000u;
    r3 = r29;
    r28 = (r28 + -24832);
    r5 = 1;
    r4 = (r28 + 74);
    ctx->lr = 0x807F04A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063E54Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r29 + 372));
    r3 = MemoryInline::FlatRead32((r3 + -10456));
}

loc_807F04B4:
{
    r3 = (r3 + r31);
    r27 = MemoryInline::FlatRead32((r3 + 52));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807F04E0;
    }
}

loc_807F04C0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 292));
}

loc_807F04D4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_807F04E0;
    }
}

loc_807F04D8:
{
}

loc_807F04DC:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(24))) {
        goto loc_807F054C;
    }
}

loc_807F04E0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 432));
    r27 = (r3 + 392);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_807F04F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807F0584;
    }
}

loc_807F04FC:
{
    r28 = 0x808B0000u;
    r3 = r29;
    r28 = (r28 + -24832);
    r5 = r27;
    r6 = r30;
    r7 = 2;
    r4 = (r28 + 80);
    ctx->lr = 0x807F051Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063E3DCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 64);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_71D1 = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_71D1[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_71D1[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        ctx->cr = cr;
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
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r27;
    r4 = r30;
    // inline leaf 0x805FA930 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x805FA930
    MemoryInline::FlatWriteRam32((r1 + 136), r3);
    r3 = r29;
    r4 = (r28 + 86);
    r6 = (r1 + 64);
    r5 = 9501;
    ctx->lr = 0x807F0548u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063DCBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807F0584;
}

loc_807F054C:
{
    r3 = r27;
    // inline leaf 0x80860ACC (9 guest instruction(s))
}

loc_inl5_0x80860ACC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_inl5_0x80860AD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl5_0x80860ADC;
    }
}

loc_inl5_0x80860AD4:
{
    r3 = 0;
    goto loc_inl5_cont_80860ACC;
}

loc_inl5_0x80860ADC:
{
    r4 = 0x808B0000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4 = (r4 + -2304);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_1);
}

loc_inl5_cont_80860ACC:
{
    // end of inlined leaf 0x80860ACC
    r5 = r3;
    r3 = r29;
    r4 = (r28 + 97);
    ctx->lr = 0x807F0564u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063E0F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r27;
    r4 = 1;
    ctx->lr = 0x807F0570u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80833774u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r5 = r3;
    r3 = r29;
    r4 = (r28 + 103);
    r6 = 0;
    ctx->lr = 0x807F0584u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063DCBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807F0584:
{
    r3 = 0x809C0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2928));
}

loc_807F0598:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_807F05A8;
    }
}

loc_807F059C:
{
}

loc_807F05A0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_807F05A8;
    }
}

loc_807F05A4:
{
    r4 = 1;
}

loc_807F05A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807F05AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F05E4;
    }
}

loc_807F05B0:
{
    r3 = 0x809C0000u;
    r6 = 0x808B0000u;
    r4 = MemoryInline::FlatRead32((r3 + 7736));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & 1020);
    r6 = (r6 + -24832);
    r3 = r29;
    r5 = MemoryInline::FlatRead32((r4 + 152));
    r4 = (r6 + 114);
    r6 = 0;
    r5 = (r5 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 860));
    ctx->lr = 0x807F05E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063DCBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807F06D0;
}

loc_807F05E4:
{
    r3 = (r3 + r31);
    r4 = MemoryInline::FlatRead32((r3 + 56));
}

loc_807F05F0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(3))) {
        goto loc_807F0620;
    }
}

loc_807F05F4:
{
    r0 = MemoryInline::FlatRead32((r3 + 248));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F05FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F0620;
    }
}

loc_807F0600:
{
    r4 = 0x808B0000u;
    r3 = r29;
    r4 = (r4 + -24832);
    r5 = 9714;
    r4 = (r4 + 126);
    r6 = 0;
    ctx->lr = 0x807F061Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063DCBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807F06D0;
}

loc_807F0620:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807F0624:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F0668;
    }
}

loc_807F0628:
{
    r3 = 0x809C0000u;
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = (r3 + 52);
    // inline leaf 0x8061B358 (8 guest instruction(s))
}

loc_inl6_0x8061B358:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_inl6_0x8061B35C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl6_0x8061B368;
    }
}

loc_inl6_0x8061B360:
{
    r3 = 0;
    goto loc_inl6_cont_8061B358;
}

loc_inl6_0x8061B368:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_8 & -16);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl6_cont_8061B358:
{
    // end of inlined leaf 0x8061B358
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8061BFACu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807F0644:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F0668;
    }
}

loc_807F0648:
{
    r4 = 0x808B0000u;
    r3 = r29;
    r4 = (r4 + -24832);
    r5 = 9714;
    r4 = (r4 + 138);
    r6 = 0;
    ctx->lr = 0x807F0664u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063DCBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807F06D0;
}

loc_807F0668:
{
    r4 = 0x808B0000u;
    r3 = r29;
    r4 = (r4 + -24832);
    r4 = (r4 + 150);
    ctx->lr = 0x807F067Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063DEECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807F06D0;
}

loc_807F0680:
{
    r3 = 0x809C0000u;
    r4 = 1;
    r0 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = (r0 + r31);
    r3 = MemoryInline::FlatRead32((r3 + 52));
    ctx->lr = 0x807F0698u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80833774u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r30 = 0x808B0000u;
    r5 = r3;
    r30 = (r30 + -24832);
    r3 = r29;
    r4 = (r30 + 162);
    r6 = 0;
    ctx->lr = 0x807F06B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063DCBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r29;
    r4 = (r30 + 173);
    r5 = 0;
    ctx->lr = 0x807F06C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063E54Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r29;
    r4 = (r30 + 179);
    ctx->lr = 0x807F06D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063DEECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807F06D0:
{
    r11 = (r1 + 336);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 340));
    ctx->lr = r0;
    r1 = (r1 + 336);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807F0044 func_807F0044 preserves=true fpr_mask=0x00000000
