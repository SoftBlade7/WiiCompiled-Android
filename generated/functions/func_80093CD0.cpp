#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80093CD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80093CD0;

loc_80093CD0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r4 = r3;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = MemoryInline::FlatRead8((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80093CE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80093D60;
    }
}

loc_80093CEC:
{
    r0 = (r8 + -2);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_80093D00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80093D60;
    }
}

loc_80093D04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80093D08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80093D3C;
    }
}

loc_80093D0C:
{
    r0 = MemoryInline::FlatRead32(r5);
    r3 = (r1 + 24);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r4 = (r4 + 136);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r0 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    ctx->lr = 0x80093D38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012B0ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80093D60;
}

loc_80093D3C:
{
    r0 = MemoryInline::FlatRead32(r5);
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = (r4 + 48);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->lr = 0x80093D60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012A770u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80093D60:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFF01FFB gpr_write=0xFFF01FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80093CD0 func_80093CD0 preserves=true fpr_mask=0x00000000
