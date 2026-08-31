#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008C340(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8008C340;

loc_8008C340:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r4;
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r5 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8008C368:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008C374;
    }
}

loc_8008C36C:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_8008C514;
}

loc_8008C374:
{
    r0 = MemoryInline::FlatRead16(r30);
    r4 = (r5 + 260);
    MemoryInline::FlatWrite16((r5 + 258), static_cast<uint16_t>(r0));
    r6 = 0;
}

loc_8008C388:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008C390;
    }
}

loc_8008C38C:
{
    r6 = (r6 | 1);
}

loc_8008C390:
{
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r5 = (r30 + 4);
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 30u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, r4, static_cast<uint16_t>(r0));
}

loc_8008C3A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008C3AC;
    }
}

loc_8008C3A4:
{
    r0 = (r6 | 2);
    r6 = (r0 & 65535);
}

loc_8008C3AC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 28u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 0u, r5);
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r4 + 2), static_cast<uint16_t>(r0));
}

loc_8008C3B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008C3C4;
    }
}

loc_8008C3BC:
{
    r0 = (r6 | 4);
    r6 = (r0 & 65535);
}

loc_8008C3C4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r5 + 2));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r4 + 4), static_cast<uint16_t>(r0));
}

loc_8008C3D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008C3DC;
    }
}

loc_8008C3D4:
{
    r0 = (r6 | 8);
    r6 = (r0 & 65535);
}

loc_8008C3DC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r5 + 4));
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r4 + 6), static_cast<uint16_t>(r0));
}

loc_8008C3E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008C3F4;
    }
}

loc_8008C3EC:
{
    r0 = (r6 | 16);
    r6 = (r0 & 65535);
}

loc_8008C3F4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r5 + 6));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r4 + 8), static_cast<uint16_t>(r0));
}

loc_8008C400:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008C40C;
    }
}

loc_8008C404:
{
    r0 = (r6 | 32);
    r6 = (r0 & 65535);
}

loc_8008C40C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r5 + 8));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r4 + 10), static_cast<uint16_t>(r0));
}

loc_8008C418:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008C424;
    }
}

loc_8008C41C:
{
    r0 = (r6 | 64);
    r6 = (r0 & 65535);
}

loc_8008C424:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r5 + 10));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r4 + 12), static_cast<uint16_t>(r0));
}

loc_8008C430:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008C43C;
    }
}

loc_8008C434:
{
    r0 = (r6 | 128);
    r6 = (r0 & 65535);
}

loc_8008C43C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r5 + 12));
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r4 + 14), static_cast<uint16_t>(r0));
}

loc_8008C448:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008C454;
    }
}

loc_8008C44C:
{
    r0 = (r6 | 256);
    r6 = (r0 & 65535);
}

loc_8008C454:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r5 + 14));
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r4 + 16), static_cast<uint16_t>(r0));
}

loc_8008C460:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008C46C;
    }
}

loc_8008C464:
{
    r0 = (r6 | 512);
    r6 = (r0 & 65535);
}

loc_8008C46C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 16u, (r5 + 16));
    MemoryInline::WriteResolved16(guest_range_0, 18u, (r4 + 18), static_cast<uint16_t>(r0));
}

loc_8008C478:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008C484;
    }
}

loc_8008C47C:
{
    r0 = (r6 | 1024);
    r6 = (r0 & 65535);
}

loc_8008C484:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 18u, (r5 + 18));
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r4 + 20), static_cast<uint16_t>(r0));
}

loc_8008C490:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008C49C;
    }
}

loc_8008C494:
{
    r0 = (r6 | 2048);
    r6 = (r0 & 65535);
}

loc_8008C49C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 20u, (r5 + 20));
    MemoryInline::WriteResolved16(guest_range_0, 22u, (r4 + 22), static_cast<uint16_t>(r0));
}

loc_8008C4A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008C4B4;
    }
}

loc_8008C4AC:
{
    r0 = (r6 | 4096);
    r6 = (r0 & 65535);
}

loc_8008C4B4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 22u, (r5 + 22));
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r4 + 24), static_cast<uint16_t>(r0));
}

loc_8008C4C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008C4CC;
    }
}

loc_8008C4C4:
{
    r0 = (r6 | 8192);
    r6 = (r0 & 65535);
}

loc_8008C4CC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 24u, (r5 + 24));
    MemoryInline::WriteResolved16(guest_range_0, 26u, (r4 + 26), static_cast<uint16_t>(r0));
}

loc_8008C4D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008C4E4;
    }
}

loc_8008C4DC:
{
    r0 = (r6 | 16384);
    r6 = (r0 & 65535);
}

loc_8008C4E4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 26u, (r5 + 26));
    MemoryInline::WriteResolved16(guest_range_0, 28u, (r4 + 28), static_cast<uint16_t>(r0));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8008C4F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008C4FC;
    }
}

loc_8008C4F4:
{
    r0 = (r6 | 32768);
    r6 = (r0 & 65535);
}

loc_8008C4FC:
{
    r4 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite16((r4 + 256), static_cast<uint16_t>(r6));
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 | 50331648);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8008C514:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000007B gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008C340 func_8008C340 preserves=true fpr_mask=0x00000000
