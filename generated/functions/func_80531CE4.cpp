#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80531CE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80531CE4;

loc_80531CE4:
{
    r4 = MemoryInline::FlatRead8((r3 + 6012));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(100));
}

loc_80531CEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80531CFC;
    }
}

loc_80531CF0:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 6012), static_cast<uint8_t>(r0));
    goto loc_80531D04;
}

loc_80531CFC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 6012), static_cast<uint8_t>(r0));
}

loc_80531D04:
{
    r6 = 0;
    r5 = (r6 * 240);
    r6 = 6;
    r4 = (r3 + r5);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 3314), 0, 1209u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r4 + 3322));
    r5 = (r6 * 240);
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 3312), 0, 1210u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r4 + 3321), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r4 + 3314));
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r4 + 3312), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 248u, (r4 + 3562));
    MemoryInline::WriteResolved8(guest_range_1, 249u, (r4 + 3561), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 240u, (r4 + 3554));
    MemoryInline::WriteResolved16(guest_range_1, 240u, (r4 + 3552), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 488u, (r4 + 3802));
    MemoryInline::WriteResolved8(guest_range_1, 489u, (r4 + 3801), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 480u, (r4 + 3794));
    MemoryInline::WriteResolved16(guest_range_1, 480u, (r4 + 3792), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 728u, (r4 + 4042));
    MemoryInline::WriteResolved8(guest_range_1, 729u, (r4 + 4041), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 720u, (r4 + 4034));
    MemoryInline::WriteResolved16(guest_range_1, 720u, (r4 + 4032), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 968u, (r4 + 4282));
    MemoryInline::WriteResolved8(guest_range_1, 969u, (r4 + 4281), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 960u, (r4 + 4274));
    MemoryInline::WriteResolved16(guest_range_1, 960u, (r4 + 4272), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1208u, (r4 + 4522));
    MemoryInline::WriteResolved8(guest_range_1, 1209u, (r4 + 4521), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 1200u, (r4 + 4514));
    MemoryInline::WriteResolved16(guest_range_1, 1200u, (r4 + 4512), static_cast<uint16_t>(r0));
    r4 = (r3 + r5);
    guest_range_2 = MemoryInline::ResolveRangeHost((r4 + 3314), 0, 1209u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 8u, (r4 + 3322));
    guest_range_3 = MemoryInline::ResolveRangeHost((r4 + 3312), 0, 1210u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 9u, (r4 + 3321), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 0u, (r4 + 3314));
    MemoryInline::WriteResolved16(guest_range_3, 0u, (r4 + 3312), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 248u, (r4 + 3562));
    MemoryInline::WriteResolved8(guest_range_3, 249u, (r4 + 3561), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 240u, (r4 + 3554));
    MemoryInline::WriteResolved16(guest_range_3, 240u, (r4 + 3552), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 488u, (r4 + 3802));
    MemoryInline::WriteResolved8(guest_range_3, 489u, (r4 + 3801), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 480u, (r4 + 3794));
    MemoryInline::WriteResolved16(guest_range_3, 480u, (r4 + 3792), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 728u, (r4 + 4042));
    MemoryInline::WriteResolved8(guest_range_3, 729u, (r4 + 4041), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 720u, (r4 + 4034));
    MemoryInline::WriteResolved16(guest_range_3, 720u, (r4 + 4032), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 968u, (r4 + 4282));
    MemoryInline::WriteResolved8(guest_range_3, 969u, (r4 + 4281), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 960u, (r4 + 4274));
    MemoryInline::WriteResolved16(guest_range_3, 960u, (r4 + 4272), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1208u, (r4 + 4522));
    MemoryInline::WriteResolved8(guest_range_3, 1209u, (r4 + 4521), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 1200u, (r4 + 4514));
    MemoryInline::WriteResolved16(guest_range_3, 1200u, (r4 + 4512), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead8((r3 + 6012));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80531CE4 func_80531CE4 preserves=true fpr_mask=0x00000000
