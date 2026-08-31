#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A1520(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801A1520;

loc_801A1520:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = -872415232;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 2052;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWrite16((r3 + 20490), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 20534));
    r0 = (r0 & 32767);
    MemoryInline::FlatWrite16((r3 + 20534), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 20490));
    goto loc_801A1554;
}

loc_801A1550:
{
    r0 = MemoryInline::FlatRead16((r3 + 20490));
}

loc_801A1554:
{
    r0 = (r0 & 1024);
}

loc_801A1558:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A1550;
    }
}

loc_801A155C:
{
    r3 = -872415232;
    r0 = MemoryInline::FlatRead16((r3 + 20490));
    goto loc_801A156C;
}

loc_801A1568:
{
    r0 = MemoryInline::FlatRead16((r3 + 20490));
}

loc_801A156C:
{
    r0 = (r0 & 512);
}

loc_801A1570:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A1568;
    }
}

loc_801A1574:
{
    r4 = -872415232;
    r0 = 2220;
    MemoryInline::FlatWrite16((r4 + 20490), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r4 + 20480), static_cast<uint16_t>(r0));
}

loc_801A1588:
{
    r3 = MemoryInline::FlatRead16((r4 + 20484));
    r0 = MemoryInline::FlatRead16((r4 + 20486));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0_mrot_2 = (r0_rot_2 & -65536);
    r0_mdest_2 = (r0 & 65535);
    r0 = (r0_mdest_2 | r0_mrot_2);
    r0 = (r0 & -2147483648);
}

loc_801A1598:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A1588;
    }
}

loc_801A159C:
{
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r31 = r3;
}

loc_801A15A4:
{
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r0 = (r3 - r31);
}

loc_801A15B0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(44))) {
        goto loc_801A15A4;
    }
}

loc_801A15B4:
{
    r3 = -872415232;
    r0 = MemoryInline::FlatRead16((r3 + 20490));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r3 + 20490), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 20490));
    goto loc_801A15D0;
}

loc_801A15CC:
{
    r0 = MemoryInline::FlatRead16((r3 + 20490));
}

loc_801A15D0:
{
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A15D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A15CC;
    }
}

loc_801A15D8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000001B gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A1520 func_801A1520 preserves=true fpr_mask=0x00000000
