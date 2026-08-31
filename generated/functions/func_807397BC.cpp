#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807397BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807397BC;

loc_807397BC:
{
    r4 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r4 + -10456));
    r5 = MemoryInline::FlatRead32((r6 + 2928));
}

loc_807397CC:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(1))) {
        goto loc_807397F0;
    }
}

loc_807397D0:
{
    r0 = (r5 + -2);
}

loc_807397D8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_807397F8;
    }
}

loc_807397DC:
{
}

loc_807397E0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(5))) {
        goto loc_807397F8;
    }
}

loc_807397E4:
{
}

loc_807397E8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(4))) {
        goto loc_80739800;
    }
}

loc_807397EC:
{
    goto loc_80739820;
}

loc_807397F0:
{
    r3 = 1;
    goto loc_80739824;
}

loc_807397F8:
{
    r3 = 0;
    goto loc_80739824;
}

loc_80739800:
{
    r3 = MemoryInline::FlatRead32((r3 + 140));
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8073980C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80739818;
    }
}

loc_80739810:
{
    r3 = 0;
    goto loc_80739824;
}

loc_80739818:
{
    r3 = 1;
    goto loc_80739824;
}

loc_80739820:
{
    r3 = 1;
}

loc_80739824:
{
}

loc_80739828:
{
    r4 = 0;
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(7))) {
        goto loc_80739840;
    }
}

loc_80739830:
{
    r0 = MemoryInline::FlatRead32((r6 + 2928));
}

loc_80739838:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_80739840;
    }
}

loc_8073983C:
{
    r4 = 1;
}

loc_80739840:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80739844:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80739864;
    }
}

loc_80739848:
{
    r0 = (r5 + -11);
    r4 = 0;
}

loc_80739854:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8073985C;
    }
}

loc_80739858:
{
    r4 = 1;
}

loc_8073985C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80739860:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80739864:
{
    r3 = 0;
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

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807397BC func_807397BC preserves=true fpr_mask=0x00000000
