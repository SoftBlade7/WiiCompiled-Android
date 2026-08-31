#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054A5C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8054A5C8;

loc_8054A5C8:
{
    r4 = 65536;
    r6 = MemoryInline::FlatRead32((r3 + 20));
    r5 = (r4 + -29504);
    r3 = 0;
    r0 = (r3 * r5);
    r6 = (r6 + 8);
    r6_addr_0 = (r6 + r0);
    r4 = MemoryInline::FlatRead32(r6_addr_0);
    r0 = (r4 + -1380646912);
}

loc_8054A5EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20548))) {
        goto loc_8054A5F4;
    }
}

loc_8054A5F0:
{
    r3 = 1;
}

loc_8054A5F4:
{
    r0 = 1;
    r0 = (r0 * r5);
    r6_addr_1 = (r6 + r0);
    r4 = MemoryInline::FlatRead32(r6_addr_1);
    r0 = (r4 + -1380646912);
}

loc_8054A608:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20548))) {
        goto loc_8054A614;
    }
}

loc_8054A60C:
{
    r0 = (r3 + 1);
    r3 = (r0 & 255);
}

loc_8054A614:
{
    r0 = 2;
    r0 = (r0 * r5);
    r6_addr_2 = (r6 + r0);
    r4 = MemoryInline::FlatRead32(r6_addr_2);
    r0 = (r4 + -1380646912);
}

loc_8054A628:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20548))) {
        goto loc_8054A634;
    }
}

loc_8054A62C:
{
    r0 = (r3 + 1);
    r3 = (r0 & 255);
}

loc_8054A634:
{
    r0 = 3;
    r0 = (r0 * r5);
    r6_addr_3 = (r6 + r0);
    r4 = MemoryInline::FlatRead32(r6_addr_3);
    r0 = (r4 + -1380646912);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20548));
}

loc_8054A648:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8054A64C:
{
    r0 = (r3 + 1);
    r3 = (r0 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000069 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8054A5C8 func_8054A5C8 preserves=true fpr_mask=0x00000000
