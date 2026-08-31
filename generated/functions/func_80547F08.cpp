#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80547F08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r5_stbu_ea_0 = 0;
    uint32_t r5_stbu_ea_1 = 0;
    uint32_t r5_stbu_ea_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    goto loc_80547F08;

loc_80547F08:
{
    r6 = 65536;
    r0 = 38;
    r6 = (r6 + -29504);
    r4 = (r4 + -1);
    r5 = (r5 * r6);
    r3 = (r3 + r5);
    r5 = (r3 + 22155);
    ctr = r0;
}

loc_80547F28:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r4 = (r4 + 2);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    r5_stbu_ea_2 = (r5 + 2);
    MemoryInline::FlatWrite8(r5_stbu_ea_2, static_cast<uint8_t>(r0));
    r5 = r5_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80547F28;
    }
}

loc_80547F3C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_80547F08_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_r5, uint32_t native_ctr)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = native_r5;
    uint32_t cached_r6 = 0;

    uint32_t cached_ctr = native_ctr;

    uint32_t r5_stbu_ea_0 = 0;
    uint32_t r5_stbu_ea_1 = 0;
    uint32_t r5_stbu_ea_2 = 0;

    goto loc_80547F08;

loc_80547F08:
{
    cached_r6 = 65536;
    cached_r0 = 38;
    cached_r6 = (cached_r6 + -29504);
    cached_r4 = (cached_r4 + -1);
    cached_r5 = (cached_r5 * cached_r6);
    cached_r3 = (cached_r3 + cached_r5);
    cached_r5 = (cached_r3 + 22155);
    cached_ctr = cached_r0;
}

loc_80547F28:
{
    cached_r3 = MemoryInline::FlatRead8((cached_r4 + 1));
    cached_r4 = (cached_r4 + 2);
    cached_r0 = MemoryInline::FlatRead8(cached_r4);
    MemoryInline::FlatWrite8((cached_r5 + 1), static_cast<uint8_t>(cached_r3));
    r5_stbu_ea_2 = (cached_r5 + 2);
    MemoryInline::FlatWrite8(r5_stbu_ea_2, static_cast<uint8_t>(cached_r0));
    cached_r5 = r5_stbu_ea_2;
    cached_ctr = (cached_ctr + -1);
    if ((cached_ctr != 0)) {
        goto loc_80547F28;
    }
}

loc_80547F3C:
{


return static_cast<uint64_t>(cached_ctr);
}


    return static_cast<uint64_t>(cached_ctr);
}
// RECOMP_STATE_FREE_ABI address=0x80547F08 symbol=func_80547F08_statefree gpr_in=0x00000038 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80547F08 func_80547F08 preserves=true fpr_mask=0x00000000

