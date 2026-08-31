#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801710F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_801710F0;

loc_801710F0:
{
    r0 = (r4 + -524288);
    r4 = 0;
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r4_mrot_0 = (r4_rot_0 & 1023);
    r4_mdest_0 = (r4 & -1024);
    r4 = (r4_mdest_0 | r4_mrot_0);
    r0 = 101;
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(10));
    r4_mrot_1 = (r4_rot_1 & 2096128);
    r4_mdest_1 = (r4 & -2096129);
    r4 = (r4_mdest_1 | r4_mrot_1);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4_mrot_2 = (r4_rot_2 & -16777216);
    r4_mdest_2 = (r4 & 16777215);
    r4 = (r4_mdest_2 | r4_mrot_2);
    MemoryInline::FlatWrite32(r3, r4);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_801710F0_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_r5)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = native_r5;

    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    goto loc_801710F0;

loc_801710F0:
{
    cached_r0 = (cached_r4 + -524288);
    cached_r4 = 0;
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(23));
    r4_mrot_0 = (r4_rot_0 & 1023);
    r4_mdest_0 = (cached_r4 & -1024);
    cached_r4 = (r4_mdest_0 | r4_mrot_0);
    cached_r0 = 101;
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(cached_r5), static_cast<uint32_t>(10));
    r4_mrot_1 = (r4_rot_1 & 2096128);
    r4_mdest_1 = (cached_r4 & -2096129);
    cached_r4 = (r4_mdest_1 | r4_mrot_1);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(24));
    r4_mrot_2 = (r4_rot_2 & -16777216);
    r4_mdest_2 = (cached_r4 & 16777215);
    cached_r4 = (r4_mdest_2 | r4_mrot_2);
    MemoryInline::FlatWrite32(cached_r3, cached_r4);

    return static_cast<uint64_t>(cached_r4);
}


    return static_cast<uint64_t>(cached_r4);
}
// RECOMP_STATE_FREE_ABI address=0x801710F0 symbol=func_801710F0_statefree gpr_in=0x00000038 gpr_out=0x00000010 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801710F0 func_801710F0 preserves=true fpr_mask=0x00000000

