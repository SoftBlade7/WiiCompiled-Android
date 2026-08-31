#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807AC1A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addc_right_0 = 0;
    uint32_t r0_addc_right_1 = 0;
    uint32_t r0_addc_right_2 = 0;
    uint32_t r0_addc_right_3 = 0;
    uint32_t r0_addc_right_4 = 0;
    uint32_t r0_addc_right_5 = 0;
    uint32_t r0_addc_right_6 = 0;
    uint32_t r0_adde_left_0 = 0;
    uint32_t r0_adde_left_1 = 0;
    uint32_t r0_adde_left_2 = 0;
    uint32_t r0_adde_left_3 = 0;
    uint32_t r0_adde_left_4 = 0;
    uint32_t r0_adde_left_5 = 0;
    uint32_t r0_adde_left_6 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_5 = 0;
    uint32_t r0_ca_6 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint32_t r8_addr_5 = 0;
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
    uint32_t xer = ctx->xer;

    goto loc_807AC1A8;

loc_807AC1A8:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 12), r23);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 16), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 20), r25);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r27);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r29);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r31);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 108), 0, 642u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 120));
    r0 = (r0 & 32768);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r5 = (r5_rot_0 & 134217727);
}

loc_807AC1C8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_807AC1D4;
    }
}

loc_807AC1CC:
{
    r29 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 108));
    goto loc_807AC1D8;
}

loc_807AC1D4:
{
    r29 = 12;
}

loc_807AC1D8:
{
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r4 + 14523));
}

loc_807AC1E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807AC318;
    }
}

loc_807AC1E8:
{
    r4 = 0x809C0000u;
}

loc_807AC1F0:
{
    r30 = MemoryInline::FlatRead32((r4 + -10456));
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_807AC200;
    }
}

loc_807AC1F8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 108));
    goto loc_807AC204;
}

loc_807AC200:
{
    r0 = 12;
}

loc_807AC204:
{
    r3 = 0x809C0000u;
    r27 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = (r0 * 240);
    r26 = 1000;
    r4 = MemoryInline::FlatRead32((r3 + 2936));
    r3 = (r30 + r0);
}

loc_807AC224:
{
    r28 = MemoryInline::FlatRead32((r3 + 244));
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_807AC238;
    }
}

loc_807AC22C:
{
    r3 = 0x809C0000u;
    r25 = MemoryInline::FlatRead32((r3 + 18248));
    goto loc_807AC23C;
}

loc_807AC238:
{
    r25 = 0;
}

loc_807AC23C:
{
    r3 = 0x809C0000u;
    r24 = 0;
    r23 = MemoryInline::FlatRead8((r3 + 14520));
    r31 = 0x809C0000u;
    goto loc_807AC308;
}

loc_807AC250:
{
    r0 = (r24 & 255);
    r0 = (r0 * 240);
    r3 = (r30 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 244));
}

loc_807AC264:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(r0))) {
        goto loc_807AC304;
    }
}

loc_807AC268:
{
    r4 = MemoryInline::FlatRead32((r31 + -10448));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & 1020);
    r0 = (r27 & 65535);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r4_addr_2 = (r4 + r3);
    r3 = MemoryInline::FlatRead32(r4_addr_2);
    r3 = MemoryInline::FlatRead16((r3 + 34));
}

loc_807AC284:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_807AC294;
    }
}

loc_807AC288:
{
    r27 = r3;
    r0 = 1;
    goto loc_807AC298;
}

loc_807AC294:
{
    r0 = 0;
}

loc_807AC298:
{
}

loc_807AC29C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807AC2AC;
    }
}

loc_807AC2A0:
{
    r29 = r24;
    r26 = 1000;
    goto loc_807AC304;
}

loc_807AC2AC:
{
    r0 = (r27 & 65535);
}

loc_807AC2B4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_807AC304;
    }
}

loc_807AC2B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_807AC2BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807AC2D4;
    }
}

loc_807AC2C0:
{
    r0 = (r24 & 255);
    r0 = (r0 * 24);
    r3 = (r25 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 964));
    goto loc_807AC2E0;
}

loc_807AC2D4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807BD718u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r4 = 1000;
    // inline leaf 0x805555CC (23 guest instruction(s))
    r5 = -1293680640;
    r11 = MemoryInline::FlatRead32((r3 + 12));
    r8 = (r5 + -11215);
    r10 = MemoryInline::FlatRead32((r3 + 8));
    r5 = 5308416;
    r6 = 1761804288;
    r0 = (r5 + -28995);
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r11) * static_cast<uint64_t>(r8)) >> 32));
    r9 = (r6 + 31154);
    r6 = 0;
    r5 = (r10 * r8);
    r8 = (r11 * r8);
    r7 = (r7 + r5);
    r0_addc_right_2 = r0;
    r0 = (r8 + r0_addc_right_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r5 = (r11 * r9);
    r0 = (r7 + r5);
    r0_adde_left_2 = r0;
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_2 + r6);
    r0 = (r0 + r0_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_left_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r3 = (r6 * r4);
    r3 = (r0 + r3);
    // end of inlined leaf 0x805555CC
}

loc_807AC2E0:
{
}

loc_807AC2E4:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r26))) {
        goto loc_807AC2F4;
    }
}

loc_807AC2E8:
{
    r26 = r3;
    r0 = 1;
    goto loc_807AC2F8;
}

loc_807AC2F4:
{
    r0 = 0;
}

loc_807AC2F8:
{
}

loc_807AC2FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807AC304;
    }
}

loc_807AC300:
{
    r29 = r24;
}

loc_807AC304:
{
    r24 = (r24 + 1);
}

loc_807AC308:
{
    r0 = (r24 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r23));
}

loc_807AC310:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807AC250;
    }
}

loc_807AC314:
{
    goto loc_807AC484;
}

loc_807AC318:
{
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r4 + 14525));
}

loc_807AC324:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807AC3F4;
    }
}

loc_807AC328:
{
    r4 = 0x809C0000u;
}

loc_807AC330:
{
    r0 = MemoryInline::FlatRead32((r4 + -10456));
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_807AC340;
    }
}

loc_807AC338:
{
    r6 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 108));
    goto loc_807AC344;
}

loc_807AC340:
{
    r6 = 12;
}

loc_807AC344:
{
    r4 = 0x809C0000u;
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r7 = (r7_rot_1 & 1020);
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r9 = (r6 * 240);
    r5 = 0x809C0000u;
    r8 = MemoryInline::FlatRead32((r4 + 12));
    r9 = (r0 + r9);
    r6 = MemoryInline::FlatRead8((r5 + 14520));
    r8_addr_1 = (r8 + r7);
    r7 = MemoryInline::FlatRead32(r8_addr_1);
    r5 = 1;
    r10 = MemoryInline::FlatRead32((r9 + 244));
    r11 = MemoryInline::FlatRead8((r7 + 32));
    goto loc_807AC3E4;
}

loc_807AC378:
{
    r9 = MemoryInline::FlatRead32((r4 + 24));
    r7 = (r5 & 255);
    r8 = MemoryInline::FlatRead32((r4 + 12));
    r7 = (r9 + r7);
    r9 = MemoryInline::FlatRead8((r7 + -1));
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r7 = (r7_rot_3 & -4);
    r8_addr_3 = (r8 + r7);
    r7 = MemoryInline::FlatRead32(r8_addr_3);
    r7 = MemoryInline::FlatRead32((r7 + 56));
    r7 = (r7 & 2);
}

loc_807AC39C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_807AC3AC;
    }
}

loc_807AC3A0:
{
    r7 = MemoryInline::ReadResolved8(guest_range_0, 641u, (r3 + 749));
}

loc_807AC3A8:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_807AC3E0;
    }
}

loc_807AC3AC:
{
    r7 = (r9 * 240);
    r7 = (r0 + r7);
    r7 = MemoryInline::FlatRead32((r7 + 244));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(r7));
}

loc_807AC3BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807AC3C8;
    }
}

loc_807AC3C0:
{
    r3 = r9;
    goto loc_807AC488;
}

loc_807AC3C8:
{
    r8 = (r5 & 255);
    r7 = (r11 & 255);
}

loc_807AC3D4:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r7))) {
        goto loc_807AC3E0;
    }
}

loc_807AC3D8:
{
    r29 = r9;
    r11 = r5;
}

loc_807AC3E0:
{
    r5 = (r5 + 1);
}

loc_807AC3E4:
{
    r7 = (r5 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r6));
}

loc_807AC3EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807AC378;
    }
}

loc_807AC3F0:
{
    goto loc_807AC484;
}

loc_807AC3F4:
{
    r5 = 0x809C0000u;
    r4 = 0x809C0000u;
    r6 = MemoryInline::FlatRead8((r5 + 14520));
    r8 = 1;
    r7 = MemoryInline::FlatRead32((r4 + -10448));
    goto loc_807AC478;
}

loc_807AC40C:
{
    r5 = MemoryInline::FlatRead32((r7 + 24));
    r0 = (r8 & 255);
    r4 = MemoryInline::FlatRead32((r7 + 12));
    r5 = (r5 + r0);
    r5 = MemoryInline::FlatRead8((r5 + -1));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4_addr_5 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_5);
    r0 = MemoryInline::FlatRead32((r4 + 56));
    r0 = (r0 & 2);
}

loc_807AC430:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807AC440;
    }
}

loc_807AC434:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 641u, (r3 + 749));
}

loc_807AC43C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807AC474;
    }
}

loc_807AC440:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 120));
    r0 = (r0 & 32768);
}

loc_807AC448:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807AC454;
    }
}

loc_807AC44C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 108));
    goto loc_807AC458;
}

loc_807AC454:
{
    r0 = 12;
}

loc_807AC458:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_807AC45C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807AC46C;
    }
}

loc_807AC460:
{
    r0 = (r8 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_807AC468:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807AC474;
    }
}

loc_807AC46C:
{
    r3 = r5;
    goto loc_807AC488;
}

loc_807AC474:
{
    r8 = (r8 + 1);
}

loc_807AC478:
{
    r0 = (r8 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_807AC480:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807AC40C;
    }
}

loc_807AC484:
{
    r3 = r29;
}

loc_807AC488:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 12));
            r24 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 20));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r1 + 28));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r1 + 36));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r1 + 40));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 44));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r1 + 52));
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF800FFB gpr_write=0xFF800FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x807AC1A8 func_807AC1A8 preserves=true fpr_mask=0x00000000
