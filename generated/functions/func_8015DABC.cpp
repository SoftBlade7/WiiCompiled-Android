#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015DABC(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8015DABC;

loc_8015DABC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_8015DAC8:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8015DB20;
    }
}

loc_8015DAE0:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DAE8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015DAF0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015DAE8;
    }
}

loc_8015DAF4:
{
    r3 = MemoryInline::FlatRead32((r30 + 28));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DAFC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015DB04:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015DAFC;
    }
}

loc_8015DB08:
{
    r3 = MemoryInline::FlatRead32((r30 + 32));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DB10:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015DB18:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015DB10;
    }
}

loc_8015DB1C:
{
    goto loc_8015DB5C;
}

loc_8015DB20:
{
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DB28:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015DB30:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015DB28;
    }
}

loc_8015DB34:
{
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DB3C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015DB44:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015DB3C;
    }
}

loc_8015DB48:
{
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DB50:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015DB58:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015DB50;
    }
}

loc_8015DB5C:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DB64:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015DB6C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015DB64;
    }
}

loc_8015DB70:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DB78:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015DB80:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015DB78;
    }
}

loc_8015DB84:
{
    r3 = MemoryInline::FlatRead32((r31 + 20));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DB8C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015DB94:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015DB8C;
    }
}

loc_8015DB98:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_8015DBA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8015DBF8;
    }
}

loc_8015DBA4:
{
    r3 = MemoryInline::FlatRead16((r31 + 36));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DBAC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015DBB4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015DBAC;
    }
}

loc_8015DBB8:
{
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DBC0:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015DBC8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015DBC0;
    }
}

loc_8015DBCC:
{
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DBD4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015DBDC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015DBD4;
    }
}

loc_8015DBE0:
{
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DBE8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015DBF0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015DBE8;
    }
}

loc_8015DBF4:
{
    goto loc_8015DC48;
}

loc_8015DBF8:
{
    r3 = MemoryInline::FlatRead16((r31 + 38));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DC00:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015DC08:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015DC00;
    }
}

loc_8015DC0C:
{
    r3 = MemoryInline::FlatRead32((r31 + 24));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DC14:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015DC1C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015DC14;
    }
}

loc_8015DC20:
{
    r3 = MemoryInline::FlatRead32((r31 + 28));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DC28:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015DC30:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015DC28;
    }
}

loc_8015DC34:
{
    r3 = MemoryInline::FlatRead32((r31 + 32));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_8015DC3C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015DC44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015DC3C;
    }
}

loc_8015DC48:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001B gpr_write=0xC000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8015DABC func_8015DABC preserves=true fpr_mask=0x00000000
