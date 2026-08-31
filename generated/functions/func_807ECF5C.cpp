#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807ECF5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807ECF5C;

loc_807ECF5C:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_807ECF64:
{
    r0 = MemoryInline::FlatRead8((r3 + 8100));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_807ECF70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_807ECF74:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8104));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807ECF84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_807ECF88:
{
    f0.d = MemoryInline::FlatReadFloat32(r5);
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 260), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 264), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 268), f0.d);
    MemoryInline::FlatWrite8((r3 + 272), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807ECF5C func_807ECF5C preserves=true fpr_mask=0x00000000
