#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808449DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_808449DC;

loc_808449DC:
{
    r0 = (r4 * 12);
    r4 = 0;
    r5 = (r3 + r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 1736), 0, 12u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r5 + 1736));
}

loc_808449F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808449F8;
    }
}

loc_808449F4:
{
    r4 = 1;
}

loc_808449F8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r5 + 1737));
}

loc_80844A00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844A08;
    }
}

loc_80844A04:
{
    r4 = (r4 + 1);
}

loc_80844A08:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r5 + 1738));
}

loc_80844A10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844A18;
    }
}

loc_80844A14:
{
    r4 = (r4 + 1);
}

loc_80844A18:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r5 + 1739));
}

loc_80844A20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844A28;
    }
}

loc_80844A24:
{
    r4 = (r4 + 1);
}

loc_80844A28:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r5 + 1740));
}

loc_80844A30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844A38;
    }
}

loc_80844A34:
{
    r4 = (r4 + 1);
}

loc_80844A38:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r5 + 1741));
}

loc_80844A40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844A48;
    }
}

loc_80844A44:
{
    r4 = (r4 + 1);
}

loc_80844A48:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r5 + 1742));
    r3 = 0;
}

loc_80844A54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844A5C;
    }
}

loc_80844A58:
{
    r3 = 1;
}

loc_80844A5C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r5 + 1743));
}

loc_80844A64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844A6C;
    }
}

loc_80844A68:
{
    r3 = (r3 + 1);
}

loc_80844A6C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r5 + 1744));
}

loc_80844A74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844A7C;
    }
}

loc_80844A78:
{
    r3 = (r3 + 1);
}

loc_80844A7C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r5 + 1745));
}

loc_80844A84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844A8C;
    }
}

loc_80844A88:
{
    r3 = (r3 + 1);
}

loc_80844A8C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r5 + 1746));
}

loc_80844A94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844A9C;
    }
}

loc_80844A98:
{
    r3 = (r3 + 1);
}

loc_80844A9C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r5 + 1747));
}

loc_80844AA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844AAC;
    }
}

loc_80844AA8:
{
    r3 = (r3 + 1);
}

loc_80844AAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r3));
}

loc_80844AB0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_80844AB4:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808449DC func_808449DC preserves=true fpr_mask=0x00000000
