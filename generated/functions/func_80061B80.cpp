#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80061B80(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
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

    goto loc_80061B80;

loc_80061B80:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8002157C (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002157C
}

loc_80061B98:
{
    r20 = r3;
    r21 = r5;
    r22 = r6;
    r23 = r7;
    r24 = r8;
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(127))) {
        goto loc_80061C10;
    }
}

loc_80061BB0:
{
}

loc_80061BB4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80061BC0;
    }
}

loc_80061BB8:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r5, r0);
}

loc_80061BC0:
{
}

loc_80061BC4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80061BD0;
    }
}

loc_80061BC8:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r6, r0);
}

loc_80061BD0:
{
}

loc_80061BD4:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80061BE0;
    }
}

loc_80061BD8:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r7, r0);
}

loc_80061BE0:
{
}

loc_80061BE4:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80061BF0;
    }
}

loc_80061BE8:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r8, r0);
}

loc_80061BF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_80061BF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80061F94;
    }
}

loc_80061BF8:
{
    r0 = 255;
    MemoryInline::FlatWrite8((r9 + 3), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r9 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r9 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r0));
    goto loc_80061F94;
}

loc_80061C10:
{
}

loc_80061C14:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80061C6C;
    }
}

loc_80061C18:
{
    r0 = (r4 * 12);
    r10 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r10 + 9268));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80061C44;
    }
}

loc_80061C2C:
{
    r0 = 255;
    MemoryInline::FlatWrite8((r9 + 3), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r9 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r9 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r0));
    goto loc_80061C6C;
}

loc_80061C44:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r10 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r10 + 8748));
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r10 + 8749));
    MemoryInline::FlatWrite8((r9 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r10 + 8750));
    MemoryInline::FlatWrite8((r9 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r10 + 8751));
    MemoryInline::FlatWrite8((r9 + 3), static_cast<uint8_t>(r0));
}

loc_80061C6C:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_80061C74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r4))) {
        goto loc_80061CBC;
    }
}

loc_80061C78:
{
}

loc_80061C7C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80061C88;
    }
}

loc_80061C80:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::FlatWrite32(r5, r0);
}

loc_80061C88:
{
}

loc_80061C8C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80061C98;
    }
}

loc_80061C90:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    MemoryInline::FlatWrite32(r6, r0);
}

loc_80061C98:
{
}

loc_80061C9C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80061CA8;
    }
}

loc_80061CA0:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    MemoryInline::FlatWrite32(r7, r0);
}

loc_80061CA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_80061CAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80061F94;
    }
}

loc_80061CB0:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    MemoryInline::FlatWrite32(r8, r0);
    goto loc_80061F94;
}

loc_80061CBC:
{
    r5 = (r4 * 12);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 20), r0);
    r27 = 0;
    r31 = 1;
    r5 = (r3 + r5);
    r28 = (r5 + 9260);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    r18 = r28;
    r19 = 2;
    MemoryInline::FlatWrite32((r3 + 28), r0);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    MemoryInline::FlatWrite32((r3 + 16), r4);
}

loc_80061CF0:
{
    r26 = MemoryInline::FlatRead8(r18);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_80061F44;
    }
}

loc_80061CFC:
{
    r0 = (r4 * 68);
    r29 = (r20 + r0);
    r0 = MemoryInline::FlatRead32((r29 + 44));
    r0 = (r0 & 4);
}

loc_80061D0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80061F44;
    }
}

loc_80061D10:
{
    r5 = (r20 + 36);
    r3 = (r20 + 44);
    goto loc_80061D24;
}

loc_80061D20:
{
    r5 = (r5 + 1);
}

loc_80061D24:
{
}

loc_80061D28:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r3))) {
        goto loc_80061D3C;
    }
}

loc_80061D2C:
{
    r0 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80061D38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r4))) {
        goto loc_80061D20;
    }
}

loc_80061D3C:
{
    r3 = (r20 + 44);
}

loc_80061D44:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r3))) {
        goto loc_80061ED0;
    }
}

loc_80061D48:
{
    r4 = MemoryInline::FlatRead32((r13 + -32472));
    r30 = (r20 + 36);
    goto loc_80061D5C;
}

loc_80061D58:
{
    r30 = (r30 + 1);
}

loc_80061D5C:
{
}

loc_80061D60:
{
    if ((static_cast<uint32_t>(r30) == static_cast<uint32_t>(r3))) {
        goto loc_80061D74;
    }
}

loc_80061D64:
{
    r0 = MemoryInline::FlatRead8(r30);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80061D70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r4))) {
        goto loc_80061D58;
    }
}

loc_80061D74:
{
    r0 = (r20 + 44);
}

loc_80061D7C:
{
    if ((static_cast<uint32_t>(r30) == static_cast<uint32_t>(r0))) {
        goto loc_80061DA0;
    }
}

loc_80061D80:
{
    r0 = (r20 + 36);
    r3 = (r29 + 48);
    r0 = (r30 - r0);
    r25 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
    r4 = r25;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80170320u>(ctx);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r26));
    goto loc_80061EDC;
}

loc_80061DA0:
{
    r4 = (r28 + 8);
    r30 = 0;
    ctr = r19;
    // nop
}

loc_80061DB0:
{
    r5 = r28;
    r6 = (r20 + r30);
    goto loc_80061DC4;
}

loc_80061DC0:
{
    r5 = (r5 + 1);
}

loc_80061DC4:
{
}

loc_80061DC8:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r4))) {
        goto loc_80061DE4;
    }
}

loc_80061DCC:
{
    r3 = MemoryInline::FlatRead8(r5);
    r0 = MemoryInline::FlatRead8((r6 + 36));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80061DE0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80061DC0;
    }
}

loc_80061DE4:
{
}

loc_80061DE8:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r4))) {
        goto loc_80061EB4;
    }
}

loc_80061DEC:
{
    r30 = (r30 + 1);
    r5 = r28;
    r6 = (r20 + r30);
    goto loc_80061E04;
}

loc_80061E00:
{
    r5 = (r5 + 1);
}

loc_80061E04:
{
}

loc_80061E08:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r4))) {
        goto loc_80061E24;
    }
}

loc_80061E0C:
{
    r3 = MemoryInline::FlatRead8(r5);
    r0 = MemoryInline::FlatRead8((r6 + 36));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80061E20:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80061E00;
    }
}

loc_80061E24:
{
}

loc_80061E28:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r4))) {
        goto loc_80061EB4;
    }
}

loc_80061E2C:
{
    r30 = (r30 + 1);
    r5 = r28;
    r6 = (r20 + r30);
    goto loc_80061E44;
}

loc_80061E40:
{
    r5 = (r5 + 1);
}

loc_80061E44:
{
}

loc_80061E48:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r4))) {
        goto loc_80061E64;
    }
}

loc_80061E4C:
{
    r3 = MemoryInline::FlatRead8(r5);
    r0 = MemoryInline::FlatRead8((r6 + 36));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80061E60:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80061E40;
    }
}

loc_80061E64:
{
}

loc_80061E68:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r4))) {
        goto loc_80061EB4;
    }
}

loc_80061E6C:
{
    r30 = (r30 + 1);
    r5 = r28;
    r6 = (r20 + r30);
    goto loc_80061E84;
}

loc_80061E80:
{
    r5 = (r5 + 1);
}

loc_80061E84:
{
}

loc_80061E88:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r4))) {
        goto loc_80061EA4;
    }
}

loc_80061E8C:
{
    r3 = MemoryInline::FlatRead8(r5);
    r0 = MemoryInline::FlatRead8((r6 + 36));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80061EA0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80061E80;
    }
}

loc_80061EA4:
{
}

loc_80061EA8:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r4))) {
        goto loc_80061EB4;
    }
}

loc_80061EAC:
{
    r30 = (r30 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80061DB0;
    }
}

loc_80061EB4:
{
    r25 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r30));
    r3 = (r29 + 48);
    r4 = r25;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80170320u>(ctx);
    r3 = (r20 + r30);
    MemoryInline::FlatWrite8((r3 + 36), static_cast<uint8_t>(r26));
    goto loc_80061EDC;
}

loc_80061ED0:
{
    r0 = (r20 + 36);
    r0 = (r5 - r0);
    r25 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_80061EDC:
{
    r3 = MemoryInline::FlatRead32((r29 + 44));
    r0 = (r3 & 2);
}

loc_80061EE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80061F18;
    }
}

loc_80061EE8:
{
    r0 = (r3 & 16);
}

loc_80061EEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80061EFC;
    }
}

loc_80061EF0:
{
    r0 = MemoryInline::FlatRead32((r20 + 28));
    r0 = (r0 | r25);
    MemoryInline::FlatWrite32((r20 + 28), r0);
}

loc_80061EFC:
{
    r0 = MemoryInline::FlatRead32((r29 + 44));
    r0 = (r0 & 32);
}

loc_80061F04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80061F44;
    }
}

loc_80061F08:
{
    r0 = MemoryInline::FlatRead32((r20 + 32));
    r0 = (r0 | r25);
    MemoryInline::FlatWrite32((r20 + 32), r0);
    goto loc_80061F44;
}

loc_80061F18:
{
    r0 = (r3 & 16);
}

loc_80061F1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80061F2C;
    }
}

loc_80061F20:
{
    r0 = MemoryInline::FlatRead32((r20 + 20));
    r0 = (r0 | r25);
    MemoryInline::FlatWrite32((r20 + 20), r0);
}

loc_80061F2C:
{
    r0 = MemoryInline::FlatRead32((r29 + 44));
    r0 = (r0 & 32);
}

loc_80061F34:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80061F44;
    }
}

loc_80061F38:
{
    r0 = MemoryInline::FlatRead32((r20 + 24));
    r0 = (r0 | r25);
    MemoryInline::FlatWrite32((r20 + 24), r0);
}

loc_80061F44:
{
    r27 = (r27 + 1);
    r18 = (r18 + 1);
}

loc_80061F50:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(8))) {
        goto loc_80061CF0;
    }
}

loc_80061F54:
{
}

loc_80061F58:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_80061F64;
    }
}

loc_80061F5C:
{
    r0 = MemoryInline::FlatRead32((r20 + 20));
    MemoryInline::FlatWrite32(r21, r0);
}

loc_80061F64:
{
}

loc_80061F68:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_80061F74;
    }
}

loc_80061F6C:
{
    r0 = MemoryInline::FlatRead32((r20 + 24));
    MemoryInline::FlatWrite32(r22, r0);
}

loc_80061F74:
{
}

loc_80061F78:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_80061F84;
    }
}

loc_80061F7C:
{
    r0 = MemoryInline::FlatRead32((r20 + 28));
    MemoryInline::FlatWrite32(r23, r0);
}

loc_80061F84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_80061F88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80061F94;
    }
}

loc_80061F8C:
{
    r0 = MemoryInline::FlatRead32((r20 + 32));
    MemoryInline::FlatWrite32(r24, r0);
}

loc_80061F94:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215C8 (15 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215C8
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFC27FB gpr_write=0xFFFC0C7B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80061B80 func_80061B80 preserves=true fpr_mask=0x00000000
