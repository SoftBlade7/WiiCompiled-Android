#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805EFE94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805EFE94;

loc_805EFE94:
{
    r0 = 5;
    r7 = MemoryInline::FlatRead32((r3 + 112));
    r8 = 0;
    r9 = 0;
    r4 = 0;
    r6 = 1;
    ctr = r0;
}

loc_805EFEB0:
{
    r10 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r9));
    r0 = (r7 & r10);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805EFEE0;
    }
}

loc_805EFEBC:
{
    r5 = MemoryInline::FlatRead32((r3 + 60));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r10 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805EFEE0;
    }
}

loc_805EFECC:
{
    r5 = (r5 + r4);
    r0 = MemoryInline::FlatRead32((r5 + 84));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_805EFED8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805EFEE0;
    }
}

loc_805EFEDC:
{
    r8 = (r8 | r10);
}

loc_805EFEE0:
{
    r9 = (r9 + 1);
    r4 = (r4 + 92);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805EFEB0;
    }
}

loc_805EFEEC:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805EFE94 func_805EFE94 preserves=true fpr_mask=0x00000000
