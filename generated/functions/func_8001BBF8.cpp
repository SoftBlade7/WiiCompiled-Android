#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001BBF8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8001BBF8;

loc_8001BBF8:
{
    r5 = 0x80270000u;
    r5 = (r5 + 4424);
    r6 = MemoryInline::FlatRead32((r5 + 56));
}

loc_8001BC04:
{
    r0 = MemoryInline::FlatRead8(r3);
    r5 = 1;
    r3 = (r3 + 1);
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8001BC18:
{
    if ((static_cast<uint32_t>(r7) > static_cast<uint32_t>(255))) {
        goto loc_8001BC20;
    }
}

loc_8001BC1C:
{
    r5 = 0;
}

loc_8001BC20:
{
}

loc_8001BC24:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8001BC2C;
    }
}

loc_8001BC28:
{
    goto loc_8001BC34;
}

loc_8001BC2C:
{
    r5 = MemoryInline::FlatRead32((r6 + 16));
    r5_addr_2 = (r5 + r7);
    r7 = MemoryInline::FlatRead8(r5_addr_2);
}

loc_8001BC34:
{
    r0 = MemoryInline::FlatRead8(r4);
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r5 = 1;
    r4 = (r4 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8001BC4C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(255))) {
        goto loc_8001BC54;
    }
}

loc_8001BC50:
{
    r5 = 0;
}

loc_8001BC54:
{
}

loc_8001BC58:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8001BC60;
    }
}

loc_8001BC5C:
{
    goto loc_8001BC68;
}

loc_8001BC60:
{
    r5 = MemoryInline::FlatRead32((r6 + 16));
    r5_addr_4 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_4);
}

loc_8001BC68:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_8001BC70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8001BC7C;
    }
}

loc_8001BC74:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_8001BC7C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8001BC88;
    }
}

loc_8001BC80:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_8001BC88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8001BC8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001BC04;
    }
}

loc_8001BC90:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8001BBF8 func_8001BBF8 preserves=true fpr_mask=0x00000000
