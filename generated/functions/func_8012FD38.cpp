#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012FD38(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8012FD38;

loc_8012FD38:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    // inline leaf 0x8013025C (2 guest instruction(s))
    r3 = 2;
    // end of inlined leaf 0x8013025C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1));
}

loc_8012FD54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012FD8C;
    }
}

loc_8012FD58:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012FDAC;
    }
}

loc_8012FD5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8012FD60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012FD68;
    }
}

loc_8012FD64:
{
    goto loc_8012FDAC;
}

loc_8012FD68:
{
    r4 = 0x80310000u;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & 1020);
    r4 = (r4 + -26176);
    r5 = 0;
    r0 = (r4 + 196608);
    r3 = (r0 + r3);
    MemoryInline::FlatWriteRam32((r3 + -30592), r5);
    MemoryInline::FlatWriteRam32((r3 + -30624), r5);
    goto loc_8012FDAC;
}

loc_8012FD8C:
{
    r4 = 0x80310000u;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & 1020);
    r4 = (r4 + -26176);
    r5 = 0;
    r0 = (r4 + 196608);
    r3 = (r0 + r3);
    MemoryInline::FlatWriteRam32((r3 + -30528), r5);
    MemoryInline::FlatWriteRam32((r3 + -30560), r5);
}

loc_8012FDAC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000003B gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012FD38 func_8012FD38 preserves=true fpr_mask=0x00000000
