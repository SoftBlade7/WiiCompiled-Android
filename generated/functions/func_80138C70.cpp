#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80138C70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80138C70;

loc_80138C70:
{
    r5 = 0x80330000u;
    r6 = 0;
    r5 = (r5 + 25208);
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 52), 0, 1134u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 281u, (r5 + 333));
}

loc_80138C84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80138C94;
    }
}

loc_80138C88:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r5 + 52));
}

loc_80138C90:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_80138CEC;
    }
}

loc_80138C94:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 565u, (r5 + 617));
    r6 = 1;
}

loc_80138CA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80138CB0;
    }
}

loc_80138CA4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 284u, (r5 + 336));
}

loc_80138CAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_80138CEC;
    }
}

loc_80138CB0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 849u, (r5 + 901));
    r6 = 2;
}

loc_80138CBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80138CCC;
    }
}

loc_80138CC0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 568u, (r5 + 620));
}

loc_80138CC8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_80138CEC;
    }
}

loc_80138CCC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1133u, (r5 + 1185));
    r6 = 3;
}

loc_80138CD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80138CE8;
    }
}

loc_80138CDC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 852u, (r5 + 904));
}

loc_80138CE4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_80138CEC;
    }
}

loc_80138CE8:
{
    r6 = 4;
}

loc_80138CEC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
}

loc_80138CF0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80138CF4:
{
    r0 = (r6 * 284);
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite16((r3 + 58), static_cast<uint16_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80138C70 func_80138C70 preserves=true fpr_mask=0x00000000
