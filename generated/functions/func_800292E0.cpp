#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800292E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
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
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800292E0;

loc_800292E0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 12), 0, 220u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 32));
    r27 = r3;
    r0 = (r0 & 512);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80029300:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002947C;
    }
}

loc_80029304:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8002930C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002947C;
    }
}

loc_80029310:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 168u, (r3 + 180));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80029318:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002947C;
    }
}

loc_8002931C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 210u, (r3 + 222));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80029324:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002947C;
    }
}

loc_80029328:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 32));
    r4 = (r0 & 4);
}

loc_80029330:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80029354;
    }
}

loc_80029334:
{
    r31 = MemoryInline::ReadResolved32(guest_range_0, 216u, (r3 + 228));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 48u, (r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_80029340:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80029374;
    }
}

loc_80029344:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 176u, (r3 + 188));
    r4 = r27;
    ctx->lr = 0x80029350u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80026780u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8002947C;
}

loc_80029354:
{
    r31 = MemoryInline::ReadResolved32(guest_range_0, 216u, (r3 + 228));
    r0 = (r31 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_80029360:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80029374;
    }
}

loc_80029364:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 176u, (r3 + 188));
    r4 = r27;
    ctx->lr = 0x80029370u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80026780u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8002947C;
}

loc_80029374:
{
}

loc_80029378:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80029384;
    }
}

loc_8002937C:
{
    r30 = -1;
    goto loc_80029388;
}

loc_80029384:
{
    r30 = MemoryInline::ReadResolved16(guest_range_0, 48u, (r3 + 60));
}

loc_80029388:
{
}

loc_8002938C:
{
    r29 = 0;
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8002939C;
    }
}

loc_80029394:
{
    r28 = 0;
    goto loc_80029438;
}

loc_8002939C:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 172u, (r3 + 184));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r0 + r3);
    r3 = (r3 + 8);
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 + r3);
    r3 = (r3 + 4);
    r0 = MemoryInline::FlatRead16(r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r3 = (r0 + r3);
    r28 = MemoryInline::FlatRead16((r3 + 6));
    goto loc_80029438;
}

loc_800293C4:
{
    r5_addr_3 = (r5 + r6);
    r0 = MemoryInline::FlatRead32(r5_addr_3);
    r3 = (r5 + r6);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & 262140);
    r3 = (r0 + r3);
    r3 = (r3 + 4);
    r0 = MemoryInline::FlatRead16(r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & -8);
    r3 = (r0 + r3);
    r0 = (r3 + 4);
    r3 = (r0 + r4);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r0 & 8);
}

loc_800293F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80029434;
    }
}

loc_800293F8:
{
    r4 = MemoryInline::FlatRead8(r3);
    r0 = (r4 + 85);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80029408:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80029434;
    }
}

loc_8002940C:
{
    r26 = MemoryInline::FlatRead8((r3 + 1));
    r5 = r31;
    r6 = MemoryInline::FlatRead16((r27 + 234));
    r7 = r30;
    r4 = (r27 + r26);
    r4 = (r4 + 32);
    ctx->lr = 0x80029428u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8002B100u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8002942C:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(112))) {
        goto loc_80029434;
    }
}

loc_80029430:
{
    r29 = 1;
}

loc_80029434:
{
    r28 = (r28 + 1);
}

loc_80029438:
{
    r5 = MemoryInline::FlatRead32((r27 + 184));
    r3 = (r28 & 65535);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r6 = (r4 + 8);
    r5_addr_2 = (r5 + r6);
    r0 = MemoryInline::FlatRead32(r5_addr_2);
    r4 = (r5 + r6);
    r4 = (r0 + r4);
    r4 = (r4 + 4);
    r0 = MemoryInline::FlatRead16(r4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r4 = (r0 + r4);
    r0 = MemoryInline::FlatRead16((r4 + 4));
}

loc_80029468:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_800293C4;
    }
}

loc_8002946C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80029470:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002947C;
    }
}

loc_80029474:
{
    r3 = r27;
    ctx->lr = 0x8002947Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80029BB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8002947C:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800292E0 func_800292E0 preserves=true fpr_mask=0x00000000
