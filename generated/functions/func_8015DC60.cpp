#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015DC60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8015DC60;

loc_8015DC60:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80290000u;
    r31 = (r31 + -32544);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
}

loc_8015DC80:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D40Cu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015DC88:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8015DC80;
    }
}

loc_8015DC8C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D41Cu>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = 0x80F40000u;
    r3 = (r3 + -24575);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DCA0:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015DCA8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015DCA0;
    }
}

loc_8015DCAC:
{
    r3 = MemoryInline::FlatRead32((r30 + 12));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DCB4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015DCBC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015DCB4;
    }
}

loc_8015DCC0:
{
    r3 = 0x80F40000u;
    r3 = (r3 + -16382);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DCCC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015DCD4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015DCCC;
    }
}

loc_8015DCD8:
{
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = (r0 & 65535);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DCE4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015DCEC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015DCE4;
    }
}

loc_8015DCF0:
{
    r3 = 0x80F40000u;
    r3 = (r3 + -24574);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DCFC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015DD04:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015DCFC;
    }
}

loc_8015DD08:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DD10:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015DD18:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015DD10;
    }
}

loc_8015DD1C:
{
    r3 = 0x80F40000u;
    r3 = (r3 + -20478);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DD28:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015DD30:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015DD28;
    }
}

loc_8015DD34:
{
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DD3C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015DD44:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015DD3C;
    }
}

loc_8015DD48:
{
    r3 = 0x80F40000u;
    r3 = (r3 + -12287);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DD54:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015DD5C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015DD54;
    }
}

loc_8015DD60:
{
    r3 = MemoryInline::FlatRead16((r30 + 36));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DD68:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015DD70:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015DD68;
    }
}

loc_8015DD74:
{
    r4 = r30;
    r3 = (r31 + 0);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015D638u>(ctx);
    r1 = ctx->gpr[1];
    r4 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r31 + 32);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015D638u>(ctx);
    r1 = ctx->gpr[1];
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r3 = (r31 + 80);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015D638u>(ctx);
    r1 = ctx->gpr[1];
    r4 = MemoryInline::FlatRead32((r30 + 16));
    r3 = (r31 + 128);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015D638u>(ctx);
    r1 = ctx->gpr[1];
    r4 = MemoryInline::FlatRead32((r30 + 28));
    r3 = (r31 + 176);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015D638u>(ctx);
    r1 = ctx->gpr[1];
    r4 = MemoryInline::FlatRead16((r30 + 36));
    r3 = (r31 + 224);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015D638u>(ctx);
    r1 = ctx->gpr[1];
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00007EA gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0x000001FE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8015DC60 func_8015DC60 preserves=true fpr_mask=0x00000000
