#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8019FC68(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8019FC68;

loc_8019FC68:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x80290000u;
    r31 = (r31 + -5016);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = 0x80340000u;
    r30 = (r30 + 28800);
    r0 = MemoryInline::FlatRead32((r13 + -25500));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8019FC94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A00C8;
    }
}

loc_8019FC98:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -25500), r0);
    ctx->lr = 0x8019FCA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801AAD7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r13 + -25444), r4);
    MemoryInline::FlatWrite32((r13 + -25448), r3);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A31F0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    ctx->lr = 0x8019FCC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012E5B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    ctx->lr = 0x8019FCC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012E5C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    ctx->lr = 0x8019FCD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012E5C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    ctx->lr = 0x8019FCD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012E5D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    ctx->lr = 0x8019FCE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012E5D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    ctx->lr = 0x8019FCE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012E5E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x83900000u;
    ctx->lr = 0x8019FCF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012E684u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->lr = 0x8019FCF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012E654u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    // inline leaf 0x8012E67C (2 guest instruction(s))
    PPC_Mtfsb1(29);
    // end of inlined leaf 0x8012E67C
    r0 = 0;
    r4 = 0x80000000u;
    MemoryInline::FlatWrite32((r13 + -25456), r4);
    MemoryInline::FlatWrite32((r13 + -25460), r0);
    MemoryInline::FlatWrite32((r13 + -29512), r0);
    r5 = MemoryInline::FlatRead32((r4 + 244));
}

loc_8019FD14:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8019FD3C;
    }
}

loc_8019FD18:
{
    r3 = (r5 + 12);
    MemoryInline::FlatWrite32((r13 + -25460), r3);
    r0 = MemoryInline::FlatRead32((r5 + 36));
    MemoryInline::FlatWrite32((r13 + -25184), r0);
    r0 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWriteRam8((r4 + 12520), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r13 + -25184));
    MemoryInline::FlatWriteRam8((r4 + 12521), static_cast<uint8_t>(r0));
    goto loc_8019FD60;
}

loc_8019FD3C:
{
    r0 = MemoryInline::FlatRead32((r4 + 52));
}

loc_8019FD44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8019FD60;
    }
}

loc_8019FD48:
{
    r3 = MemoryInline::FlatRead8((r4 + 12520));
    r0 = (r13 + -25464);
    MemoryInline::FlatWrite32((r13 + -25464), r3);
    MemoryInline::FlatWrite32((r13 + -25460), r0);
    r0 = MemoryInline::FlatRead8((r4 + 12521));
    MemoryInline::FlatWrite32((r13 + -25184), r0);
}

loc_8019FD60:
{
    r0 = 1;
    r4 = 0x80000000u;
    MemoryInline::FlatWrite32((r13 + -29512), r0);
    r3 = MemoryInline::FlatRead32((r4 + 12556));
}

loc_8019FD74:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8019FDE0;
    }
}

loc_8019FD78:
{
    r3 = 0x803A0000u;
    r3 = (r3 + -20096);
    r0 = (r3 & 805306368);
}

loc_8019FD84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8019FDDC;
    }
}

loc_8019FD88:
{
    r4 = MemoryInline::FlatRead32((r13 + -25456));
    r0 = MemoryInline::FlatRead32((r4 + 48));
}

loc_8019FD94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8019FD9C;
    }
}

loc_8019FD98:
{
    goto loc_8019FDA0;
}

loc_8019FD9C:
{
    r3 = r0;
}

loc_8019FDA0:
{
    r4 = MemoryInline::FlatRead32((r13 + -25456));
    r0 = MemoryInline::FlatRead32((r4 + 48));
}

loc_8019FDAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8019FDE0;
    }
}

loc_8019FDB0:
{
    r4 = MemoryInline::FlatRead32((r13 + -25460));
}

loc_8019FDB8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8019FDE0;
    }
}

loc_8019FDBC:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8019FDC4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_8019FDE0;
    }
}

loc_8019FDC8:
{
    r3 = 0x803A0000u;
    r3 = (r3 + -28288);
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    goto loc_8019FDE0;
}

loc_8019FDDC:
{
    r3 = (r4 + 16384);
}

loc_8019FDE0:
{
    // inline leaf 0x801A10EC (2 guest instruction(s))
    MemoryInline::FlatWrite32((r13 + -29024), r3);
    // end of inlined leaf 0x801A10EC
    r3 = 0x80000000u;
    r3 = MemoryInline::FlatRead32((r3 + 12560));
}

loc_8019FDF0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8019FE0C;
    }
}

loc_8019FDF4:
{
    r3 = MemoryInline::FlatRead32((r13 + -25456));
    r3 = MemoryInline::FlatRead32((r3 + 52));
}

loc_8019FE00:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8019FE0C;
    }
}

loc_8019FE04:
{
    r3 = 0x81700000u;
    r3 = (r3 + 0);
}

loc_8019FE0C:
{
    // inline leaf 0x801A10D4 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r13 + -25416), r3);
    // end of inlined leaf 0x801A10D4
    r3 = 0x80000000u;
    r3 = MemoryInline::FlatRead32((r3 + 12580));
}

loc_8019FE1C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8019FE88;
    }
}

loc_8019FE20:
{
    r5 = 0x803A0000u;
    r5 = (r5 + -20096);
    r4 = (r5 & 805306368);
    r0 = (r4 + -268435456);
}

loc_8019FE34:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_8019FE68;
    }
}

loc_8019FE38:
{
    r4 = MemoryInline::FlatRead32((r13 + -25460));
    r3 = r5;
}

loc_8019FE44:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8019FE84;
    }
}

loc_8019FE48:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8019FE50:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_8019FE84;
    }
}

loc_8019FE54:
{
    r3 = 0x803A0000u;
    r3 = (r3 + -28288);
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    goto loc_8019FE84;
}

loc_8019FE68:
{
    r4 = 0x90000000u;
}

loc_8019FE70:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r4))) {
        goto loc_8019FE84;
    }
}

loc_8019FE74:
{
    r0 = (r4 + 2048);
}

loc_8019FE7C:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_8019FE84;
    }
}

loc_8019FE80:
{
    r3 = r0;
}

loc_8019FE84:
{
    // inline leaf 0x801A10F4 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r13 + -29020), r3);
    // end of inlined leaf 0x801A10F4
}

loc_8019FE88:
{
    r3 = 0x80000000u;
    r3 = MemoryInline::FlatRead32((r3 + 12584));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8019FE94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8019FE9C;
    }
}

loc_8019FE98:
{
    // inline leaf 0x801A10DC (2 guest instruction(s))
    MemoryInline::FlatWrite32((r13 + -25412), r3);
    // end of inlined leaf 0x801A10DC
}

loc_8019FE9C:
{
    // inline leaf 0x801AB658 (6 guest instruction(s))
    r3 = 0x80000000u;
    r0 = MemoryInline::FlatRead32((r3 + 12592));
    MemoryInline::FlatWrite32((r13 + -28952), r0);
    r0 = MemoryInline::FlatRead32((r3 + 12596));
    MemoryInline::FlatWrite32((r13 + -25304), r0);
    // end of inlined leaf 0x801AB658
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x801A00E0u>(ctx);
    r3 = ctx->gpr[3];
    ctx->lr = 0x8019FEA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A9548u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->lr = 0x8019FEACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A05B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    // inline leaf 0x801A72E4 (6 guest instruction(s))
    r0 = 0;
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r3 + 12492), r0);
    MemoryInline::FlatWriteRam32((r3 + 12488), r0);
    MemoryInline::FlatWriteRam32((r3 + 12496), r0);
    // end of inlined leaf 0x801A72E4
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x801A661Cu>(ctx);
    r3 = ctx->gpr[3];
    ctx->lr = 0x8019FEB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A245Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A1AE4u>(ctx);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80168FA0u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801B2DE0u>(ctx);
    ctx->lr = 0x8019FEC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A8BD4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->lr = 0x8019FECCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A961Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A1358u>(ctx);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8012E630u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r3 & -1073741825);
    ctx->lr = 0x8019FEDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012E638u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r13 + -25512));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8019FEE4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019FEEC;
    }
}

loc_8019FEE8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x801A7DFCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8019FEEC:
{
    ctx->lr = 0x8019FEF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8019F9BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r13 + -29080));
    r3 = (r13 + -29060);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8019FF00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A25D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -25460));
}

loc_8019FF08:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8019FF1C;
    }
}

loc_8019FF0C:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8019FF14:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8019FF1C;
    }
}

loc_8019FF18:
{
    ctx->lr = 0x8019FF1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001C478u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8019FF1C:
{
    r0 = MemoryInline::FlatRead32((r13 + -25508));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8019FF24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019FF3C;
    }
}

loc_8019FF28:
{
    r0 = MemoryInline::FlatRead32((r13 + -25396));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8019FF30:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019FF3C;
    }
}

loc_8019FF34:
{
    ctx->lr = 0x8019FF38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8019F5C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->lr = 0x8019FF3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8019F79Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8019FF3C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65C0u>(ctx);
    r3 = ctx->gpr[3];
    ctx->lr = 0x8019FF44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80193478u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r13 + -25508));
}

loc_8019FF4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8019FF74;
    }
}

loc_8019FF50:
{
    r0 = MemoryInline::FlatRead32((r13 + -25396));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8019FF58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019FF74;
    }
}

loc_8019FF5C:
{
    ctx->lr = 0x8019FF60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801AB848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->lr = 0x8019FF64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B0180u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8019FF64:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801B0220u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_8019FF6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8019FF64;
    }
}

loc_8019FF70:
{
    ctx->lr = 0x8019FF74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801AC668u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8019FF74:
{
    r0 = MemoryInline::FlatRead32((r13 + -25512));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8019FF7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A0084;
    }
}

loc_8019FF80:
{
    r3 = 0x80000000u;
    r0 = MemoryInline::FlatRead8((r3 + 12636));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(129));
}

loc_8019FF8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8019FF98;
    }
}

loc_8019FF90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019FFB8;
    }
}

loc_8019FF94:
{
    goto loc_8019FFB8;
}

loc_8019FF98:
{
    r3 = (r31 + 600);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8019FFA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A25D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = (r31 + 680);
    r3 = (r13 + -29056);
    r4 = 1150;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8019FFB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A2660u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8019FFB8:
{
    r3 = 0x80000000u;
    r0 = MemoryInline::FlatRead8((r3 + 12637));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(129));
}

loc_8019FFC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8019FFD0;
    }
}

loc_8019FFC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019FFF0;
    }
}

loc_8019FFCC:
{
    goto loc_8019FFF0;
}

loc_8019FFD0:
{
    r3 = (r31 + 704);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8019FFDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A25D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = (r31 + 680);
    r3 = (r13 + -29056);
    r4 = 1168;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8019FFF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A2660u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8019FFF0:
{
    ctx->lr = 0x8019FFF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015EA1Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r13 + -25504));
}

loc_8019FFFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801A0014;
    }
}

loc_801A0000:
{
    r4 = 65536;
    r3 = 0x80000000u;
    r0 = (r4 + -28672);
    MemoryInline::FlatWriteRam16((r3 + 12518), static_cast<uint16_t>(r0));
    goto loc_801A0044;
}

loc_801A0014:
{
    r3 = 0x80000000u;
    r0 = MemoryInline::FlatRead16((r3 + 12518));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A0020:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A0044;
    }
}

loc_801A0024:
{
    r3 = (r30 + 32);
    r4 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A1600u>(ctx);
    r5 = 0x801A0000u;
    r3 = (r30 + 64);
    r4 = (r30 + 32);
    r5 = (r5 + -1664);
    ctx->lr = 0x801A0044u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801629B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801A0044:
{
    r0 = MemoryInline::FlatRead32((r13 + -25512));
}

loc_801A004C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801A0058;
    }
}

loc_801A0050:
{
    r0 = 64;
    goto loc_801A0060;
}

loc_801A0058:
{
    r3 = 0x80000000u;
    r0 = MemoryInline::FlatRead8((r3 + 12676));
}

loc_801A0060:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(128));
}

loc_801A0064:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A0084;
    }
}

loc_801A0068:
{
    r0 = MemoryInline::FlatRead32((r13 + -25396));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A0070:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A0084;
    }
}

loc_801A0074:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801643FCu>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801A007C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A0084;
    }
}

loc_801A0080:
{
    ctx->lr = 0x801A0084u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A8858u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801A0084:
{
    r0 = MemoryInline::FlatRead32((r13 + -25512));
}

loc_801A008C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A00A0;
    }
}

loc_801A0090:
{
    r0 = MemoryInline::FlatRead32((r13 + -25508));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A0098:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A00A0;
    }
}

loc_801A009C:
{
    ctx->lr = 0x801A00A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801AD07Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801A00A0:
{
    r0 = MemoryInline::FlatRead32((r13 + -25512));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A00A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A00C8;
    }
}

loc_801A00AC:
{
    r0 = MemoryInline::FlatRead32((r13 + -25508));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A00B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A00C8;
    }
}

loc_801A00B8:
{
    r0 = MemoryInline::FlatRead32((r13 + -25396));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A00C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A00C8;
    }
}

loc_801A00C4:
{
    ctx->lr = 0x801A00C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801AC220u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801A00C8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8019FC68 func_8019FC68 preserves=true fpr_mask=0x00000000
