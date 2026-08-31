#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001BC9C(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8001BC9C;

loc_8001BC9C:
{
    r5 = 0x80270000u;
    r5 = (r5 + 4424);
    r6 = MemoryInline::FlatRead32((r5 + 56));
}

loc_8001BCA8:
{
    r0 = MemoryInline::FlatRead8(r3);
    r5 = 1;
    r3 = (r3 + 1);
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8001BCBC:
{
    if ((static_cast<uint32_t>(r7) > static_cast<uint32_t>(255))) {
        goto loc_8001BCC4;
    }
}

loc_8001BCC0:
{
    r5 = 0;
}

loc_8001BCC4:
{
}

loc_8001BCC8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8001BCD0;
    }
}

loc_8001BCCC:
{
    goto loc_8001BCD8;
}

loc_8001BCD0:
{
    r5 = MemoryInline::FlatRead32((r6 + 16));
    r5_addr_2 = (r5 + r7);
    r7 = MemoryInline::FlatRead8(r5_addr_2);
}

loc_8001BCD8:
{
    r0 = MemoryInline::FlatRead8(r4);
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r5 = 1;
    r4 = (r4 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8001BCF0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(255))) {
        goto loc_8001BCF8;
    }
}

loc_8001BCF4:
{
    r5 = 0;
}

loc_8001BCF8:
{
}

loc_8001BCFC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8001BD04;
    }
}

loc_8001BD00:
{
    goto loc_8001BD0C;
}

loc_8001BD04:
{
    r5 = MemoryInline::FlatRead32((r6 + 16));
    r5_addr_4 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_4);
}

loc_8001BD0C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_8001BD14:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8001BD20;
    }
}

loc_8001BD18:
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

loc_8001BD20:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8001BD2C;
    }
}

loc_8001BD24:
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

loc_8001BD2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8001BD30:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001BCA8;
    }
}

loc_8001BD34:
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
// RECOMP_REGISTRATION base 0x8001BC9C func_8001BC9C preserves=true fpr_mask=0x00000000
