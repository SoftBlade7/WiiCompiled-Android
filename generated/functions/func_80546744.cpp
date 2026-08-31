#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80546744(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r6_stbu_ea_0 = 0;
    uint32_t r6_stbu_ea_1 = 0;
    uint32_t r6_stbu_ea_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    goto loc_80546744;

loc_80546744:
{
    r6 = 65536;
    r0 = 38;
    r7 = (r6 + -29504);
    r6 = (r4 + -1);
    r4 = (r5 * r7);
    r3 = (r3 + r4);
    r4 = (r3 + 22155);
    ctr = r0;
}

loc_80546764:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r4 = (r4 + 2);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r3));
    r6_stbu_ea_2 = (r6 + 2);
    MemoryInline::FlatWrite8(r6_stbu_ea_2, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80546764;
    }
}

loc_80546778:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80546744_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_r5)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = native_r5;
    uint32_t cached_r6 = 0;
    uint32_t cached_r7 = 0;

    uint32_t cached_ctr = 0;

    uint32_t r6_stbu_ea_0 = 0;
    uint32_t r6_stbu_ea_1 = 0;
    uint32_t r6_stbu_ea_2 = 0;

    goto loc_80546744;

loc_80546744:
{
    cached_r6 = 65536;
    cached_r0 = 38;
    cached_r7 = (cached_r6 + -29504);
    cached_r6 = (cached_r4 + -1);
    cached_r4 = (cached_r5 * cached_r7);
    cached_r3 = (cached_r3 + cached_r4);
    cached_r4 = (cached_r3 + 22155);
    cached_ctr = cached_r0;
}

loc_80546764:
{
    cached_r3 = MemoryInline::FlatRead8((cached_r4 + 1));
    cached_r4 = (cached_r4 + 2);
    cached_r0 = MemoryInline::FlatRead8(cached_r4);
    MemoryInline::FlatWrite8((cached_r6 + 1), static_cast<uint8_t>(cached_r3));
    r6_stbu_ea_2 = (cached_r6 + 2);
    MemoryInline::FlatWrite8(r6_stbu_ea_2, static_cast<uint8_t>(cached_r0));
    cached_r6 = r6_stbu_ea_2;
    cached_ctr = (cached_ctr + -1);
    if ((cached_ctr != 0)) {
        goto loc_80546764;
    }
}

loc_80546778:
{


return { static_cast<uint64_t>(cached_r6), static_cast<uint64_t>(cached_r7) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80546744 symbol=func_80546744_statefree gpr_in=0x00000038 gpr_out=0x000000C0 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x000000D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80546744 func_80546744 preserves=true fpr_mask=0x00000000

