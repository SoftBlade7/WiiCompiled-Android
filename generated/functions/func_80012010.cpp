#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80012010(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80012010;

loc_80012010:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_80012018:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80012028;
    }
}

loc_8001201C:
{
    r0 = 10;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    goto loc_80012038;
}

loc_80012028:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8001202C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80012038;
    }
}

loc_80012030:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
}

loc_80012038:
{
    r6 = 255;
    r5 = 193;
    r0 = 254;
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r1 + 16), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r1 + 18), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r1 + 19), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r1 + 21), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r1 + 22), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r1 + 23), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r1 + 24), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r1 + 25), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r1 + 26), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r1 + 27), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r1 + 28), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r1 + 29), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r1 + 30), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r1 + 31), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r1 + 32), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r1 + 33), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r1 + 34), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r1 + 35), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r1 + 36), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r1 + 37), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r1 + 38), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r1 + 39), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r1 + 40), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 25u, (r1 + 41), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r1 + 42), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r1 + 43), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r1 + 44), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r1 + 45), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r1 + 46), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 31u, (r1 + 47), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r1 + 17), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r1 + 20), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800122BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0xC000006B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80012010 func_80012010 preserves=true fpr_mask=0x00000000
