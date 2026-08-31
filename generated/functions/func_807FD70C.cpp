#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807FD70C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r12 = ctx->gpr[12];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t ctr = ctx->ctr;

    goto loc_807FD70C;

loc_807FD70C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r9 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r9 + -21568));
    r9 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 288));
    ctr = r12;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEDFF gpr_write=0x00001200 gpr_return=0x00000000 fpr_read=0xFFFFFFFD fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0xFF cr_write=0x00 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x807FD70C func_807FD70C preserves=true fpr_mask=0x00000000
