#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052F1E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_10 = 0;
    uint32_t r4_addr_11 = 0;
    uint32_t r4_addr_12 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_10 = 0;
    uint32_t r5_addr_11 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_addr_7 = 0;
    uint32_t r5_addr_8 = 0;
    uint32_t r5_addr_9 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8052F1E0;

loc_8052F1E0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = MemoryInline::FlatRead32((r3 + 2896));
}

loc_8052F1EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8052F228;
    }
}

loc_8052F1F0:
{
    r4 = MemoryInline::FlatRead8((r3 + 2924));
}

loc_8052F1F8:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(4))) {
        goto loc_8052F228;
    }
}

loc_8052F1FC:
{
    r0 = MemoryInline::FlatRead32((r3 + 2900));
}

loc_8052F204:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8052F228;
    }
}

loc_8052F208:
{
    r0 = MemoryInline::FlatRead32((r3 + 2920));
    r5 = 0x80890000u;
    r5 = (r5 + -80);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & 1020);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r0 = (r5 + r0);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_1);
    MemoryInline::FlatWrite32((r3 + 2888), r0);
}

loc_8052F228:
{
    r4 = MemoryInline::FlatRead32((r3 + 2896));
    r0 = 0;
}

loc_8052F234:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(7))) {
        goto loc_8052F244;
    }
}

loc_8052F238:
{
}

loc_8052F23C:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(10))) {
        goto loc_8052F244;
    }
}

loc_8052F240:
{
    r0 = 1;
}

loc_8052F244:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8052F248:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052F4E0;
    }
}

loc_8052F24C:
{
    r11 = 1;
    r9 = 2;
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 12u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r1 + 9), static_cast<uint8_t>(r9));
    r8 = 3;
    r7 = 4;
    r6 = 5;
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r1 + 10), static_cast<uint8_t>(r8));
    r4 = 6;
    r10 = 7;
    r9 = 8;
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r1 + 11), static_cast<uint8_t>(r7));
    r8 = 9;
    r7 = 10;
    r5 = (r1 + 8);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r1 + 12), static_cast<uint8_t>(r6));
    r6 = 11;
    r12 = 1;
    r0 = 3;
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r1 + 13), static_cast<uint8_t>(r4));
    r4 = 12;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r1 + 8), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r1 + 14), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r1 + 15), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r1 + 16), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r1 + 17), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r1 + 18), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r1 + 19), static_cast<uint8_t>(r4));
}

loc_8052F2B8:
{
    r7 = (r12 & 255);
    r9 = 0;
    ctr = r0;
}

loc_8052F2C4:
{
    r4 = (r9 & 255);
    r6 = (r4 * 240);
    r6 = (r3 + r6);
    r8 = MemoryInline::FlatRead32((r6 + 24));
}

loc_8052F2D8:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(5))) {
        goto loc_8052F2F0;
    }
}

loc_8052F2DC:
{
    r6 = MemoryInline::FlatRead8((r6 + 233));
}

loc_8052F2E4:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r6))) {
        goto loc_8052F2F0;
    }
}

loc_8052F2E8:
{
    r5_addr_3 = (r5 + r4);
    MemoryInline::FlatWrite8(r5_addr_3, static_cast<uint8_t>(r11));
    r11 = (r11 + 1);
}

loc_8052F2F0:
{
    r9 = (r9 + 1);
    r4 = (r9 & 255);
    r6 = (r4 * 240);
    r6 = (r3 + r6);
    r8 = MemoryInline::FlatRead32((r6 + 24));
}

loc_8052F308:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(5))) {
        goto loc_8052F320;
    }
}

loc_8052F30C:
{
    r6 = MemoryInline::FlatRead8((r6 + 233));
}

loc_8052F314:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r6))) {
        goto loc_8052F320;
    }
}

loc_8052F318:
{
    r5_addr_5 = (r5 + r4);
    MemoryInline::FlatWrite8(r5_addr_5, static_cast<uint8_t>(r11));
    r11 = (r11 + 1);
}

loc_8052F320:
{
    r9 = (r9 + 1);
    r4 = (r9 & 255);
    r6 = (r4 * 240);
    r6 = (r3 + r6);
    r8 = MemoryInline::FlatRead32((r6 + 24));
}

loc_8052F338:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(5))) {
        goto loc_8052F350;
    }
}

loc_8052F33C:
{
    r6 = MemoryInline::FlatRead8((r6 + 233));
}

loc_8052F344:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r6))) {
        goto loc_8052F350;
    }
}

loc_8052F348:
{
    r5_addr_7 = (r5 + r4);
    MemoryInline::FlatWrite8(r5_addr_7, static_cast<uint8_t>(r11));
    r11 = (r11 + 1);
}

loc_8052F350:
{
    r9 = (r9 + 1);
    r4 = (r9 & 255);
    r6 = (r4 * 240);
    r6 = (r3 + r6);
    r8 = MemoryInline::FlatRead32((r6 + 24));
}

loc_8052F368:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(5))) {
        goto loc_8052F380;
    }
}

loc_8052F36C:
{
    r6 = MemoryInline::FlatRead8((r6 + 233));
}

loc_8052F374:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r6))) {
        goto loc_8052F380;
    }
}

loc_8052F378:
{
    r5_addr_9 = (r5 + r4);
    MemoryInline::FlatWrite8(r5_addr_9, static_cast<uint8_t>(r11));
    r11 = (r11 + 1);
}

loc_8052F380:
{
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8052F2C4;
    }
}

loc_8052F388:
{
    r12 = (r12 + 1);
}

loc_8052F390:
{
    if ((static_cast<uint32_t>(r12) <= static_cast<uint32_t>(12))) {
        goto loc_8052F2B8;
    }
}

loc_8052F394:
{
    r0 = 3;
    r4 = (r1 + 8);
    r7 = 0;
    ctr = r0;
}

loc_8052F3A4:
{
    r0 = (r7 & 255);
    r5 = (r0 * 240);
    r5 = (r3 + r5);
    r6 = MemoryInline::FlatRead32((r5 + 24));
}

loc_8052F3B8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(5))) {
        goto loc_8052F3D0;
    }
}

loc_8052F3BC:
{
    r5 = MemoryInline::FlatRead8((r5 + 233));
}

loc_8052F3C4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8052F3D0;
    }
}

loc_8052F3C8:
{
    r4_addr_4 = (r4 + r0);
    MemoryInline::FlatWrite8(r4_addr_4, static_cast<uint8_t>(r11));
    r11 = (r11 + 1);
}

loc_8052F3D0:
{
    r7 = (r7 + 1);
    r0 = (r7 & 255);
    r5 = (r0 * 240);
    r5 = (r3 + r5);
    r6 = MemoryInline::FlatRead32((r5 + 24));
}

loc_8052F3E8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(5))) {
        goto loc_8052F400;
    }
}

loc_8052F3EC:
{
    r5 = MemoryInline::FlatRead8((r5 + 233));
}

loc_8052F3F4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8052F400;
    }
}

loc_8052F3F8:
{
    r4_addr_6 = (r4 + r0);
    MemoryInline::FlatWrite8(r4_addr_6, static_cast<uint8_t>(r11));
    r11 = (r11 + 1);
}

loc_8052F400:
{
    r7 = (r7 + 1);
    r0 = (r7 & 255);
    r5 = (r0 * 240);
    r5 = (r3 + r5);
    r6 = MemoryInline::FlatRead32((r5 + 24));
}

loc_8052F418:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(5))) {
        goto loc_8052F430;
    }
}

loc_8052F41C:
{
    r5 = MemoryInline::FlatRead8((r5 + 233));
}

loc_8052F424:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8052F430;
    }
}

loc_8052F428:
{
    r4_addr_8 = (r4 + r0);
    MemoryInline::FlatWrite8(r4_addr_8, static_cast<uint8_t>(r11));
    r11 = (r11 + 1);
}

loc_8052F430:
{
    r7 = (r7 + 1);
    r0 = (r7 & 255);
    r5 = (r0 * 240);
    r5 = (r3 + r5);
    r6 = MemoryInline::FlatRead32((r5 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(5));
}

loc_8052F448:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052F460;
    }
}

loc_8052F44C:
{
    r5 = MemoryInline::FlatRead8((r5 + 233));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8052F454:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052F460;
    }
}

loc_8052F458:
{
    r4_addr_10 = (r4 + r0);
    MemoryInline::FlatWrite8(r4_addr_10, static_cast<uint8_t>(r11));
    r11 = (r11 + 1);
}

loc_8052F460:
{
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8052F3A4;
    }
}

loc_8052F468:
{
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 12u, true, false);
    r8 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r1 + 8));
    r10 = (r0 * 240);
    r7 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r1 + 9));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r1 + 10));
    r0 = 6;
    r5 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r1 + 11));
    r9 = (r3 + r10);
    MemoryInline::FlatWrite8((r9 + 233), static_cast<uint8_t>(r8));
    r10 = (r0 * 240);
    r4 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r1 + 12));
    MemoryInline::FlatWrite8((r9 + 473), static_cast<uint8_t>(r7));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r1 + 13));
    MemoryInline::FlatWrite8((r9 + 713), static_cast<uint8_t>(r6));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r1 + 14));
    MemoryInline::FlatWrite8((r9 + 953), static_cast<uint8_t>(r5));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r1 + 15));
    MemoryInline::FlatWrite8((r9 + 1193), static_cast<uint8_t>(r4));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r1 + 16));
    MemoryInline::FlatWrite8((r9 + 1433), static_cast<uint8_t>(r0));
    r9 = (r3 + r10);
    r5 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r1 + 17));
    MemoryInline::FlatWrite8((r9 + 233), static_cast<uint8_t>(r8));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r1 + 18));
    MemoryInline::FlatWrite8((r9 + 473), static_cast<uint8_t>(r7));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r1 + 19));
    MemoryInline::FlatWrite8((r9 + 713), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r9 + 953), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r9 + 1193), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r9 + 1433), static_cast<uint8_t>(r0));
}

loc_8052F4E0:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FF3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8052F1E0 func_8052F1E0 preserves=true fpr_mask=0x00000000
