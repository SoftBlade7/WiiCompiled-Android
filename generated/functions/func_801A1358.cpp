#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A1358(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801A1358;

loc_801A1358:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r0 = MemoryInline::FlatRead32((r13 + -25512));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A1370:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A137C;
    }
}

loc_801A1374:
{
    r3 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A1138u>(ctx);
}

loc_801A137C:
{
    // inline leaf 0x801A10B4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -25416));
    // end of inlined leaf 0x801A10B4
    r4 = 0x81000000u;
    r5 = 128;
    r3 = (r3 + -128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x80290000u;
    r3 = 0x81000000u;
    r4 = (r4 + -3992);
    r5 = 128;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x81000000u;
    r4 = 128;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A162Cu>(ctx);
    r3 = -872415232;
    r0 = 67;
    MemoryInline::FlatWrite16((r3 + 20498), static_cast<uint16_t>(r0));
    r0 = 2220;
    MemoryInline::FlatWrite16((r3 + 20490), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 20490));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r3 + 20490), static_cast<uint16_t>(r0));
}

loc_801A13D0:
{
    r0 = MemoryInline::FlatRead16((r3 + 20490));
    r0 = (r0 & 1);
}

loc_801A13D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A13D0;
    }
}

loc_801A13DC:
{
    r0 = 0;
    r4 = -872415232;
    MemoryInline::FlatWrite16((r4 + 20480), static_cast<uint16_t>(r0));
}

loc_801A13E8:
{
    r3 = MemoryInline::FlatRead16((r4 + 20484));
    r0 = MemoryInline::FlatRead16((r4 + 20486));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0_mrot_2 = (r0_rot_2 & -65536);
    r0_mdest_2 = (r0 & 65535);
    r0 = (r0_mdest_2 | r0_mrot_2);
    r0 = (r0 & -2147483648);
}

loc_801A13F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A13E8;
    }
}

loc_801A13FC:
{
    r4 = -872415232;
    r0 = 16777216;
    MemoryInline::FlatWrite32((r4 + 20512), r0);
    r3 = 0;
    r0 = 32;
    MemoryInline::FlatWrite32((r4 + 20516), r3);
    MemoryInline::FlatWrite32((r4 + 20520), r0);
    r5 = MemoryInline::FlatRead16((r4 + 20490));
    goto loc_801A1424;
}

loc_801A1420:
{
    r5 = MemoryInline::FlatRead16((r4 + 20490));
}

loc_801A1424:
{
    r0 = (r5 & 32);
}

loc_801A1428:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801A1420;
    }
}

loc_801A142C:
{
    r3 = -872415232;
    MemoryInline::FlatWrite16((r3 + 20490), static_cast<uint16_t>(r5));
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r31 = r3;
}

loc_801A143C:
{
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r0 = (r3 - r31);
}

loc_801A1448:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(2194))) {
        goto loc_801A143C;
    }
}

loc_801A144C:
{
    r4 = -872415232;
    r0 = 16777216;
    MemoryInline::FlatWrite32((r4 + 20512), r0);
    r3 = 0;
    r0 = 32;
    MemoryInline::FlatWrite32((r4 + 20516), r3);
    MemoryInline::FlatWrite32((r4 + 20520), r0);
    r5 = MemoryInline::FlatRead16((r4 + 20490));
    goto loc_801A1474;
}

loc_801A1470:
{
    r5 = MemoryInline::FlatRead16((r4 + 20490));
}

loc_801A1474:
{
    r0 = (r5 & 32);
}

loc_801A1478:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801A1470;
    }
}

loc_801A147C:
{
    r3 = -872415232;
    MemoryInline::FlatWrite16((r3 + 20490), static_cast<uint16_t>(r5));
    r0 = MemoryInline::FlatRead16((r3 + 20490));
    r0 = (r0 & -2049);
    MemoryInline::FlatWrite16((r3 + 20490), static_cast<uint16_t>(r0));
}

loc_801A1490:
{
    r0 = MemoryInline::FlatRead16((r3 + 20490));
    r0 = (r0 & 1024);
}

loc_801A1498:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A1490;
    }
}

loc_801A149C:
{
    r3 = -872415232;
    r0 = MemoryInline::FlatRead16((r3 + 20490));
    r0 = (r0 & -5);
    MemoryInline::FlatWrite16((r3 + 20490), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 20484));
    goto loc_801A14B8;
}

loc_801A14B4:
{
    r0 = MemoryInline::FlatRead16((r3 + 20484));
}

loc_801A14B8:
{
    r0 = (r0 & 32768);
}

loc_801A14BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801A14B4;
    }
}

loc_801A14C0:
{
    r4 = -872415232;
    r0 = 2220;
    r3 = MemoryInline::FlatRead16((r4 + 20486));
    r3 = MemoryInline::FlatRead16((r4 + 20490));
    r3 = (r3 | 4);
    MemoryInline::FlatWrite16((r4 + 20490), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 20490), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 20490));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r4 + 20490), static_cast<uint16_t>(r0));
}

loc_801A14E8:
{
    r0 = MemoryInline::FlatRead16((r4 + 20490));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A14F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A14E8;
    }
}

loc_801A14F4:
{
    // inline leaf 0x801A10B4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -25416));
    // end of inlined leaf 0x801A10B4
    r4 = r3;
    r3 = 0x81000000u;
    r4 = (r4 + -128);
    r5 = 128;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
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

// RECOMP_GUEST_ABI gpr_read=0x8000207B gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801A1358 func_801A1358 preserves=true fpr_mask=0x00000000
