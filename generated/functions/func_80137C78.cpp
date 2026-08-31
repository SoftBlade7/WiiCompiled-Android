#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80137C78(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80137C78;

loc_80137C78:
{
    r4 = 0x80330000u;
    r5 = 0;
    r4 = (r4 + 25208);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 52), 0, 1134u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 281u, (r4 + 333));
}

loc_80137C8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80137C9C;
    }
}

loc_80137C90:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r4 + 52));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_80137C98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80137CF4;
    }
}

loc_80137C9C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 565u, (r4 + 617));
    r5 = 1;
}

loc_80137CA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80137CB8;
    }
}

loc_80137CAC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 284u, (r4 + 336));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_80137CB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80137CF4;
    }
}

loc_80137CB8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 849u, (r4 + 901));
    r5 = 2;
}

loc_80137CC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80137CD4;
    }
}

loc_80137CC8:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 568u, (r4 + 620));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_80137CD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80137CF4;
    }
}

loc_80137CD4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1133u, (r4 + 1185));
    r5 = 3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80137CE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80137CF0;
    }
}

loc_80137CE4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 852u, (r4 + 904));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_80137CEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80137CF4;
    }
}

loc_80137CF0:
{
    r5 = 4;
}

loc_80137CF4:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80137C78 func_80137C78 preserves=true fpr_mask=0x00000000
