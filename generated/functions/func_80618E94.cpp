#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80618E94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80618E94;

loc_80618E94:
{
    r0 = MemoryInline::FlatRead32((r3 + 372));
    r6 = 0x80890000u;
    r6 = (r6 + 30360);
}

loc_80618EA4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_80618F00;
    }
}

loc_80618EA8:
{
    r5 = 0x808C0000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5 = (r5 + -19948);
    r5_addr_0 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_0);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80618EC0u:
        goto loc_80618EC0;
        break;
    case 0x80618EC8u:
        goto loc_80618EC8;
        break;
    case 0x80618ED0u:
        goto loc_80618ED0;
        break;
    case 0x80618ED8u:
        goto loc_80618ED8;
        break;
    case 0x80618EE0u:
        goto loc_80618EE0;
        break;
    case 0x80618EE8u:
        goto loc_80618EE8;
        break;
    case 0x80618EF0u:
        goto loc_80618EF0;
        break;
    case 0x80618EF8u:
        goto loc_80618EF8;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80618EC0:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 4));
    goto loc_80618F04;
}

loc_80618EC8:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 288));
    goto loc_80618F04;
}

loc_80618ED0:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 292));
    goto loc_80618F04;
}

loc_80618ED8:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 296));
    goto loc_80618F04;
}

loc_80618EE0:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 300));
    goto loc_80618F04;
}

loc_80618EE8:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 28));
    goto loc_80618F04;
}

loc_80618EF0:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 304));
    goto loc_80618F04;
}

loc_80618EF8:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 308));
    goto loc_80618F04;
}

loc_80618F00:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 100));
}

loc_80618F04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80618F08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80618F14;
    }
}

loc_80618F0C:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
}

loc_80618F14:
{
    MemoryInline::FlatWriteFloat32((r3 + 124), f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000061 gpr_return=0x00000000 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80618E94 func_80618E94 preserves=true fpr_mask=0x00000000
