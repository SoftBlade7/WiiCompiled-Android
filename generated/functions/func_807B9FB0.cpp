#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807B9FB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807B9FB0;

loc_807B9FB0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021590 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -4), r31);
    // end of inlined leaf 0x80021590
    r0 = (r4 + -255);
    r8 = 0x809C0000u;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r31 = 0x808A0000u;
    r29_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r29 = (r29_rot_0 & 134217727);
}

loc_807B9FD8:
{
    r30 = MemoryInline::FlatRead8((r8 + 14521));
    r23 = r3;
    r24 = r4;
    r25 = r5;
    r26 = r6;
    r27 = r7;
    r31 = (r31 + 25296);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_807B9FFC;
    }
}

loc_807B9FF8:
{
    r24 = 0;
}

loc_807B9FFC:
{
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r4 + 14524));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807BA008:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807BA218;
    }
}

loc_807BA00C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807BA014:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807BA218;
    }
}

loc_807BA018:
{
    r0 = MemoryInline::FlatRead32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(20));
}

loc_807BA020:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BA028;
    }
}

loc_807BA024:
{
    goto loc_807BA218;
}

loc_807BA028:
{
}

loc_807BA02C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_807BA058;
    }
}

loc_807BA030:
{
    r4 = MemoryInline::FlatRead32(r3);
    r5 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + -10448));
    r0 = MemoryInline::FlatRead8((r4 + 24));
    r4 = MemoryInline::FlatRead32((r5 + 12));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    r0 = MemoryInline::FlatRead32((r4 + 56));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807BA054:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807BA218;
    }
}

loc_807BA058:
{
}

loc_807BA05C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_807BA07C;
    }
}

loc_807BA060:
{
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r4 + 14523));
}

loc_807BA06C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807BA07C;
    }
}

loc_807BA070:
{
    r4 = MemoryInline::FlatRead32((r3 + 48));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 48), r0);
}

loc_807BA07C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_807BA080:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BA098;
    }
}

loc_807BA084:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r0 = 184;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    goto loc_807BA0C4;
}

loc_807BA098:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_807BA09C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BA0B4;
    }
}

loc_807BA0A0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r0 = 45;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    goto loc_807BA0C4;
}

loc_807BA0B4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r0 = 184;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
}

loc_807BA0C4:
{
    r3 = MemoryInline::FlatRead32(r3);
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80798DBCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_807BA0D4:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_807BA11C;
    }
}

loc_807BA0DC:
{
}

loc_807BA0E0:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_807BA11C;
    }
}

loc_807BA0E4:
{
    r3 = MemoryInline::FlatRead32(r23);
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 13848));
    r0 = MemoryInline::FlatRead8((r3 + 24));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807BA104:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BA11C;
    }
}

loc_807BA108:
{
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80798DBCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_807BA114:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807BA11C;
    }
}

loc_807BA118:
{
    r28 = 1;
}

loc_807BA11C:
{
    r0 = MemoryInline::FlatRead32((r23 + 48));
}

loc_807BA124:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(21))) {
        goto loc_807BA138;
    }
}

loc_807BA128:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(16));
}

loc_807BA12C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807BA144;
    }
}

loc_807BA130:
{
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807BA134:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807BA144;
    }
}

loc_807BA138:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r23 + 32), r0);
    goto loc_807BA168;
}

loc_807BA144:
{
    r3 = 0x809C0000u;
    r8 = MemoryInline::FlatRead32(r23);
    r3 = MemoryInline::FlatRead32((r3 + 13936));
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r28;
    ctx->lr = 0x807BA164u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BB42Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r23 + 32), r3);
}

loc_807BA168:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r3 + 14521));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807BA174:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807BA1A4;
    }
}

loc_807BA178:
{
    r3 = MemoryInline::FlatRead32((r23 + 32));
    ctx->lr = 0x807BA180u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80799BE8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807BA184:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807BA1A4;
    }
}

loc_807BA188:
{
    r0 = MemoryInline::FlatRead32((r23 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_807BA190:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BA19C;
    }
}

loc_807BA194:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r23 + 32), r0);
}

loc_807BA19C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r23 + 46), static_cast<uint8_t>(r0));
}

loc_807BA1A4:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r26 = 1;
    r0 = 0;
    MemoryInline::FlatWrite32((r23 + 4), r26);
    r3 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r23 + 28));
    MemoryInline::FlatWrite32((r23 + 8), r0);
    r4 = r24;
    r5 = r25;
    r7 = (r29 & 255);
    MemoryInline::FlatWriteFloat32((r23 + 20), f0.d);
    MemoryInline::FlatWrite16((r23 + 40), static_cast<uint16_t>(r24));
    MemoryInline::FlatWrite8((r23 + 42), static_cast<uint8_t>(r25));
    MemoryInline::FlatWrite8((r23 + 43), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r23 + 44), static_cast<uint8_t>(r27));
    r3 = MemoryInline::FlatRead32((r3 + 13936));
    ctx->lr = 0x807BA1E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BB8D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r23 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_807BA1F0:
{
    MemoryInline::FlatWrite32((r23 + 24), r0);
    MemoryInline::FlatWrite32((r23 + 28), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BA218;
    }
}

loc_807BA1FC:
{
    r4 = MemoryInline::FlatRead32(r23);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8440));
    r4 = MemoryInline::FlatRead8((r4 + 24));
    r5 = MemoryInline::FlatRead32((r23 + 32));
    ctx->lr = 0x807BA214u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8065C6C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWrite8((r23 + 45), static_cast<uint8_t>(r26));
}

loc_807BA218:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
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
    ctx->gpr[11] = r11;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807B9FB0 func_807B9FB0 preserves=true fpr_mask=0x00000000
