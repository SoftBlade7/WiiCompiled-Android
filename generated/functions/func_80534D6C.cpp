#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80534D6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80534D6C;

loc_80534D6C:
{
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80534D74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80534D78:
{
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r4 + -10520));
    r4 = MemoryInline::FlatRead32((r5 + 32));
}

loc_80534D88:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80534D94;
    }
}

loc_80534D8C:
{
    r4 = MemoryInline::FlatRead16((r4 + 4));
    goto loc_80534D98;
}

loc_80534D94:
{
    r4 = 0;
}

loc_80534D98:
{
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
}

loc_80534DA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80534DCC;
    }
}

loc_80534DA8:
{
    r4 = MemoryInline::FlatRead32((r5 + 28));
}

loc_80534DB0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80534DBC;
    }
}

loc_80534DB4:
{
    r4 = MemoryInline::FlatRead16((r4 + 4));
    goto loc_80534DC0;
}

loc_80534DBC:
{
    r4 = 0;
}

loc_80534DC0:
{
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_80534DCC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80534DD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80534DE0;
    }
}

loc_80534DD4:
{
    r4 = MemoryInline::FlatRead32((r5 + 32));
    r0 = MemoryInline::FlatRead8((r4 + 12));
    goto loc_80534DE4;
}

loc_80534DE0:
{
    r0 = -1;
}

loc_80534DE4:
{
    r4 = MemoryInline::FlatRead16((r3 + 36));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::FlatWrite8((r3 + 40), static_cast<uint8_t>(r0));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 36), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80534D6C func_80534D6C preserves=true fpr_mask=0x00000000
