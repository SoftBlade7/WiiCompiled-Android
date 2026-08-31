#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052200(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80052200;

loc_80052200:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 92u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r7 = MemoryInline::FlatRead32(r3);
    r28 = r3;
    r29 = r4;
    r25 = r5;
    r0 = MemoryInline::FlatRead32(r7);
    r30 = r6;
    r31 = 1;
}

loc_80052234:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80052244;
    }
}

loc_80052238:
{
    r3 = (r7 + r0);
    r0 = (r3 + -4);
    goto loc_80052248;
}

loc_80052244:
{
    r0 = 0;
}

loc_80052248:
{
    r3 = MemoryInline::FlatRead32((r7 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80052250:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800523C4;
    }
}

loc_80052254:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r3 = r29;
    r4 = (r1 + 52);
    ctx->lr = 0x80052264u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C550u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80052268:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800523C0;
    }
}

loc_8005226C:
{
    r4 = MemoryInline::FlatRead32(r28);
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80052278:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80052288;
    }
}

loc_8005227C:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0 = (r0 & 1);
}

loc_80052284:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800523C0;
    }
}

loc_80052288:
{
    MemoryInline::FlatWriteRam32((r1 + 48), r3);
    r27 = MemoryInline::FlatRead32(r25);
    r25 = MemoryInline::FlatRead32(r28);
}

loc_80052298:
{
    MemoryInline::FlatWrite32((r25 + 8), r3);
    r0 = MemoryInline::FlatRead32((r25 + 16));
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_800522BC;
    }
}

loc_800522A4:
{
}

loc_800522A8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_800522BC;
    }
}

loc_800522AC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_1 & -32);
    r3 = (r27 + r0);
    r26 = (r3 + 4);
    goto loc_800522C0;
}

loc_800522BC:
{
    r26 = 0;
}

loc_800522C0:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800522CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80052324;
    }
}

loc_800522D0:
{
    r3 = (r1 + 48);
    r4 = (r1 + 24);
    r5 = (r1 + 18);
    r6 = (r1 + 20);
    r7 = (r1 + 36);
    r8 = (r1 + 28);
    r9 = (r1 + 32);
    r10 = (r1 + 16);
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800529F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r25 + 20));
    r3 = r26;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = MemoryInline::FlatRead32((r1 + 24));
    r5 = MemoryInline::FlatRead16((r1 + 18));
    r6 = MemoryInline::FlatRead16((r1 + 20));
    r7 = MemoryInline::FlatRead32((r1 + 36));
    r8 = MemoryInline::FlatRead32((r25 + 24));
    r9 = MemoryInline::FlatRead32((r25 + 28));
    r10 = MemoryInline::FlatRead8((r1 + 16));
    ctx->lr = 0x80052320u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80170A04u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8005236C;
}

loc_80052324:
{
    r3 = (r1 + 48);
    r4 = (r1 + 24);
    r5 = (r1 + 18);
    r6 = (r1 + 20);
    r7 = (r1 + 40);
    r8 = (r1 + 28);
    r9 = (r1 + 32);
    r10 = (r1 + 16);
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80052930u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32((r1 + 24));
    r3 = r26;
    r5 = MemoryInline::FlatRead16((r1 + 18));
    r6 = MemoryInline::FlatRead16((r1 + 20));
    r7 = MemoryInline::FlatRead32((r1 + 40));
    r8 = MemoryInline::FlatRead32((r25 + 24));
    r9 = MemoryInline::FlatRead32((r25 + 28));
    r10 = MemoryInline::FlatRead8((r1 + 16));
    ctx->lr = 0x8005236Cu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x801707F8u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8005236C:
{
    r4 = MemoryInline::FlatRead32((r25 + 32));
    r3 = r26;
    r5 = MemoryInline::FlatRead32((r25 + 36));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f3.d = MemoryInline::FlatReadFloat32((r25 + 40));
    r6 = MemoryInline::FlatRead8((r25 + 48));
    r7 = MemoryInline::FlatRead8((r25 + 49));
    r8 = MemoryInline::FlatRead32((r25 + 44));
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

loc_80052398:
{
    r4 = MemoryInline::FlatRead32((r25 + 16));
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_800523C4;
    }
}

loc_800523A0:
{
}

loc_800523A4:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(7))) {
        goto loc_800523C4;
    }
}

loc_800523A8:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32(r27);
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32(r27, r0);
    goto loc_800523C4;
}

loc_800523C0:
{
    r31 = 0;
}

loc_800523C4:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800523D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800524A0;
    }
}

loc_800523D4:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_800523DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800523EC;
    }
}

loc_800523E0:
{
    r3 = (r3 + r0);
    r0 = (r3 + -4);
    goto loc_800523F0;
}

loc_800523EC:
{
    r0 = 0;
}

loc_800523F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800523F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800524A0;
    }
}

loc_800523F8:
{
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r3 = r29;
    r4 = (r1 + 44);
    ctx->lr = 0x80052408u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C460u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8005240C:
{
    r7 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005249C;
    }
}

loc_80052414:
{
    r25 = MemoryInline::FlatRead32(r28);
    r28 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWrite32((r25 + 12), r3);
}

loc_80052424:
{
    r0 = MemoryInline::FlatRead32((r25 + 16));
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80052444;
    }
}

loc_8005242C:
{
}

loc_80052430:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_80052444;
    }
}

loc_80052434:
{
    r0 = (r0 * 12);
    r4 = (r28 + r0);
    r0 = (r4 + 4);
    goto loc_80052448;
}

loc_80052444:
{
    r0 = 0;
}

loc_80052448:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r6 = MemoryInline::FlatRead16((r3 + 28));
}

loc_80052454:
{
    r5 = MemoryInline::FlatRead32((r3 + 24));
    r3 = r0;
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80052468;
    }
}

loc_80052460:
{
    r4 = (r7 + r4);
    goto loc_8005246C;
}

loc_80052468:
{
    r4 = 0;
}

loc_8005246C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80170F80u>(ctx);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80052474:
{
    r4 = MemoryInline::FlatRead32((r25 + 16));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800524A0;
    }
}

loc_8005247C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(7));
}

loc_80052480:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800524A0;
    }
}

loc_80052484:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32(r28);
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32(r28, r0);
    goto loc_800524A0;
}

loc_8005249C:
{
    r31 = 0;
}

loc_800524A0:
{
    r11 = (r1 + 96);
    r3 = r31;
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
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
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 100));
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80052200 func_80052200 preserves=true fpr_mask=0x00000000
